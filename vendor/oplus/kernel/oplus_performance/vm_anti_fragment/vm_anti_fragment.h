/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_VM_ANTI_FRAGMENT_H_
#define _OPLUS_VM_ANTI_FRAGMENT_H_

#include <linux/mm_types.h>
#include <linux/rbtree.h>

#define RESERVE_AREA_ALIGN_SIZE	(1UL << 12)
#define RESERVE_VMAP_AREA_SIZE	0UL

struct kmem_cache;
struct seq_file;
struct pid_namespace;
struct pid;
struct task_struct;
struct file_operations;
struct file;
struct vm_unmapped_area_info;

int dup_reserved_mmap(struct mm_struct *mm, struct mm_struct *oldmm,
		      struct kmem_cache *vm_area_cachep);
void trigger_svm_oom_event(struct mm_struct *mm, bool brk_risk, bool is_locked);
void trigger_cpu_oom_event(unsigned long len);
void account_vma_alloc_err(unsigned long len);

bool is_backed_addr(struct mm_struct *mm, unsigned long addr, unsigned long end);
bool start_is_backed_addr(struct mm_struct *mm, unsigned long addr);
bool reserved_area_checking(struct mm_struct *mm, vm_flags_t *vm_flags,
			    unsigned long flags, unsigned long addr,
			    unsigned long len);
unsigned long vm_mmap_pgoff_with_check(struct file *file, unsigned long addr,
				       unsigned long len, unsigned long prot,
				       unsigned long flags,
				       unsigned long pgoff);
void exit_reserved_mmap(struct mm_struct *mm);

static inline void init_reserve_mm(struct mm_struct *mm)
{
	if (!mm)
		return;

	mm->reserve_vma = NULL;
	mm->reserve_mmap = NULL;
	mm->reserve_mm_rb = RB_ROOT;
	mm->reserve_highest_vm_end = 0;
	mm->reserve_map_count = 0;
	mm->do_reserve_mmap = 0;
	mm->vm_search_two_way = false;
}

static inline bool check_reserve_mmap_doing(struct mm_struct *mm)
{
	return mm && mm->do_reserve_mmap;
}

int proc_pid_reserve_area(struct seq_file *m, struct pid_namespace *ns,
			  struct pid *pid, struct task_struct *task);
extern const struct file_operations proc_pid_rmaps_operations;

#endif /* _OPLUS_VM_ANTI_FRAGMENT_H_ */
