/* Generated by wayland-scanner */

/*
 * Copyright © 2013-2016 Collabora, Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif

extern const struct wl_interface wl_surface_interface;
extern const struct wl_interface wp_viewport_interface;

static const struct wl_interface *viewporter_types[] = {
	NULL,
	NULL,
	NULL,
	NULL,
	&wp_viewport_interface,
	&wl_surface_interface,
};

static const struct wl_message wp_viewporter_requests[] = {
	{ "destroy", "", viewporter_types + 0 },
	{ "get_viewport", "no", viewporter_types + 4 },
};

WL_PRIVATE const struct wl_interface wp_viewporter_interface = {
	"wp_viewporter", 1,
	2, wp_viewporter_requests,
	0, NULL,
};

static const struct wl_message wp_viewport_requests[] = {
	{ "destroy", "", viewporter_types + 0 },
	{ "set_source", "ffff", viewporter_types + 0 },
	{ "set_destination", "ii", viewporter_types + 0 },
};

WL_PRIVATE const struct wl_interface wp_viewport_interface = {
	"wp_viewport", 1,
	3, wp_viewport_requests,
	0, NULL,
};
