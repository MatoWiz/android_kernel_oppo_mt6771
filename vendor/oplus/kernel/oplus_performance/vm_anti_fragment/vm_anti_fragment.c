// SPDX-License-Identifier: GPL-2.0

#include <linux/fs.h>
#include <linux/mm.h>
#include <linux/pid_namespace.h>
#include <linux/proc_fs.h>
#include <linux/resmap_account.h>
#include <linux/sched/mm.h>
#include <linux/seq_file.h>
#include <linux/vm_anti_fragment.h>

int vm_search_two_way;
int cpu_oom_event_enable;

int dup_reserved_mmap(struct mm_struct *mm, struct mm_struct *oldmm,
		      struct kmem_cache *vm_area_cachep)
{
	/*
	 * Vendor implementation is unavailable in this source drop.
	 * Keep default reserve state from init_reserve_mm() and succeed.
	 */
	(void)mm;
	(void)oldmm;
	(void)vm_area_cachep;
	return 0;
}

void trigger_svm_oom_event(struct mm_struct *mm, bool brk_risk, bool is_locked)
{
	(void)mm;
	(void)brk_risk;
	(void)is_locked;
}

void trigger_cpu_oom_event(unsigned long len)
{
	(void)len;
}

void account_vma_alloc_err(unsigned long len)
{
	(void)len;
}

int proc_pid_reserve_area(struct seq_file *m, struct pid_namespace *ns,
			  struct pid *pid, struct task_struct *task)
{
	struct mm_struct *mm = get_task_mm(task);

	(void)ns;
	(void)pid;

	if (!mm)
		return 0;

	if (mm->reserve_vma)
		seq_printf(m, "%lx-%lx\n", mm->reserve_vma->vm_start,
			   mm->reserve_vma->vm_end);
	else
		seq_puts(m, "0-0\n");

	mmput(mm);
	return 0;
}

const struct file_operations proc_pid_rmaps_operations = {
	.open = simple_open,
	.llseek = default_llseek,
};

bool is_backed_addr(struct mm_struct *mm, unsigned long addr, unsigned long end)
{
	(void)mm;
	(void)addr;
	(void)end;
	return false;
}

bool start_is_backed_addr(struct mm_struct *mm, unsigned long addr)
{
	(void)mm;
	(void)addr;
	return false;
}

bool reserved_area_checking(struct mm_struct *mm, vm_flags_t *vm_flags,
			    unsigned long flags, unsigned long addr,
			    unsigned long len)
{
	(void)mm;
	(void)vm_flags;
	(void)flags;
	(void)addr;
	(void)len;
	return false;
}

unsigned long vm_mmap_pgoff_with_check(struct file *file, unsigned long addr,
				       unsigned long len, unsigned long prot,
				       unsigned long flags,
				       unsigned long pgoff)
{
	return vm_mmap(file, addr, len, prot, flags, pgoff << PAGE_SHIFT);
}

void exit_reserved_mmap(struct mm_struct *mm)
{
	(void)mm;
}
