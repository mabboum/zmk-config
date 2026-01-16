/*
 * Minimal event impl to ensure `as_zmk_keycode_state_changed` is defined
 * This file is added in the top-level workspace so the reusable build
 * can pick it up through `ZMK_EXTRA_MODULES` when building.
 */

#include <zephyr/kernel.h>
#include <zmk/events/keycode_state_changed.h>

ZMK_EVENT_IMPL(zmk_keycode_state_changed);
