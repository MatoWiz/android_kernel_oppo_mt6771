========================
OPPO touch gaming modes
========================

This kernel exposes extra touch tuning nodes for the Ilitek ILI9881H
touchscreen driver under::

  /proc/touchpanel/

Nodes
=====

- ``touch_response_mode`` (0-3)
- ``touch_sensitivity_mode`` (0-3)
- ``touch_profile_mode`` (0-3 preset profile selector)
- ``game_switch_enable`` (existing compatibility node)

Mode meanings
=============

``touch_response_mode``:

- ``0``: normal behavior (game switch off, hopping off)
- ``1``: high response (game switch on, hopping off)
- ``2``: higher response (game switch on, hopping on with moderate value)
- ``3``: overkill response (game switch on, hopping on with stronger value)

``touch_sensitivity_mode``:

- ``0``: normal sensitivity
- ``1``: higher sensitivity
- ``2``: very high sensitivity
- ``3``: maximum/aggressive sensitivity

``touch_profile_mode`` (preset that sets both response and sensitivity):

- ``0``: normal / battery-focused
- ``1``: balanced gaming
- ``2``: performance gaming
- ``3``: overkill gaming

How to change from root shell (Termux)
======================================

Example commands::

  su
  echo 2 > /proc/touchpanel/touch_response_mode
  echo 1 > /proc/touchpanel/touch_sensitivity_mode
  echo 2 > /proc/touchpanel/touch_profile_mode

Read current values::

  cat /proc/touchpanel/touch_response_mode
  cat /proc/touchpanel/touch_sensitivity_mode
  cat /proc/touchpanel/touch_profile_mode

Compatibility note
==================

Writing to ``/proc/touchpanel/game_switch_enable`` is still supported:

- ``0`` sets response mode to ``0``
- non-zero sets response mode to at least ``1``

Networking note
===============

This kernel tree does not include ``sch_cake`` sources/Kconfig, so CAKE
cannot be enabled only by defconfig changes in this repository snapshot.
