/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Google LWIS GS101 G3AA Interrupt And Event Defines
 *
 * Copyright (c) 2020 Google, LLC
 */

#ifndef DT_BINDINGS_LWIS_PLATFORM_GS101_G3AA_H_
#define DT_BINDINGS_LWIS_PLATFORM_GS101_G3AA_H_

#include <dt-bindings/lwis/platform/common.h>

/* clang-format off */


#define G3AA_INTERRUPTS_CTX0_BASE (HW_EVENT_MASK + 0)

#define G3AA_INTERRUPTS_CTX0_BAYER_START_OF_FRAME 0
#define G3AA_INTERRUPTS_CTX0_BAYER_END_OF_FRAME 1
#define G3AA_INTERRUPTS_CTX0_BAYER_CDAF_PRIMARY 2
#define G3AA_INTERRUPTS_CTX0_BAYER_CDAF_WINDOWS 3
#define G3AA_INTERRUPTS_CTX0_BAYER_AE_STATS 4
#define G3AA_INTERRUPTS_CTX0_BAYER_AWB_STATS 5
#define G3AA_INTERRUPTS_CTX0_BAYER_LSC_STATS 6
#define G3AA_INTERRUPTS_CTX0_BAYER_FLICKER_STATS 7
#define G3AA_INTERRUPTS_CTX0_BAYER_HISTOGRAM0 8
#define G3AA_INTERRUPTS_CTX0_BAYER_HISTOGRAM1 9
#define G3AA_INTERRUPTS_CTX0_BAYER_HISTOGRAM2 10
#define G3AA_INTERRUPTS_CTX0_BAYER_UAE_STATS 11
#define G3AA_INTERRUPTS_CTX0_BAYER_MOTION_METERING 12
#define G3AA_INTERRUPTS_CTX0_PDAF_START_OF_FRAME 13
#define G3AA_INTERRUPTS_CTX0_PDAF_EARLY 14
#define G3AA_INTERRUPTS_CTX0_PDAF_END_OF_FRAME 15

#define G3AA_INTERRUPTS_CTX1_BASE (HW_EVENT_MASK + 32)

#define G3AA_INTERRUPTS_CTX1_BAYER_START_OF_FRAME 0
#define G3AA_INTERRUPTS_CTX1_BAYER_END_OF_FRAME 1
#define G3AA_INTERRUPTS_CTX1_BAYER_CDAF_PRIMARY 2
#define G3AA_INTERRUPTS_CTX1_BAYER_CDAF_WINDOWS 3
#define G3AA_INTERRUPTS_CTX1_BAYER_AE_STATS 4
#define G3AA_INTERRUPTS_CTX1_BAYER_AWB_STATS 5
#define G3AA_INTERRUPTS_CTX1_BAYER_LSC_STATS 6
#define G3AA_INTERRUPTS_CTX1_BAYER_FLICKER_STATS 7
#define G3AA_INTERRUPTS_CTX1_BAYER_HISTOGRAM0 8
#define G3AA_INTERRUPTS_CTX1_BAYER_HISTOGRAM1 9
#define G3AA_INTERRUPTS_CTX1_BAYER_HISTOGRAM2 10
#define G3AA_INTERRUPTS_CTX1_BAYER_UAE_STATS 11
#define G3AA_INTERRUPTS_CTX1_BAYER_MOTION_METERING 12
#define G3AA_INTERRUPTS_CTX1_PDAF_START_OF_FRAME 13
#define G3AA_INTERRUPTS_CTX1_PDAF_EARLY 14
#define G3AA_INTERRUPTS_CTX1_PDAF_END_OF_FRAME 15

#define G3AA_INTERRUPTS_CTX2_BASE (HW_EVENT_MASK + 64)

#define G3AA_INTERRUPTS_CTX2_BAYER_START_OF_FRAME 0
#define G3AA_INTERRUPTS_CTX2_BAYER_END_OF_FRAME 1
#define G3AA_INTERRUPTS_CTX2_BAYER_CDAF_PRIMARY 2
#define G3AA_INTERRUPTS_CTX2_BAYER_CDAF_WINDOWS 3
#define G3AA_INTERRUPTS_CTX2_BAYER_AE_STATS 4
#define G3AA_INTERRUPTS_CTX2_BAYER_AWB_STATS 5
#define G3AA_INTERRUPTS_CTX2_BAYER_LSC_STATS 6
#define G3AA_INTERRUPTS_CTX2_BAYER_FLICKER_STATS 7
#define G3AA_INTERRUPTS_CTX2_BAYER_HISTOGRAM0 8
#define G3AA_INTERRUPTS_CTX2_BAYER_HISTOGRAM1 9
#define G3AA_INTERRUPTS_CTX2_BAYER_HISTOGRAM2 10
#define G3AA_INTERRUPTS_CTX2_BAYER_UAE_STATS 11
#define G3AA_INTERRUPTS_CTX2_BAYER_MOTION_METERING 12
#define G3AA_INTERRUPTS_CTX2_PDAF_START_OF_FRAME 13
#define G3AA_INTERRUPTS_CTX2_PDAF_EARLY 14
#define G3AA_INTERRUPTS_CTX2_PDAF_END_OF_FRAME 15




/* clang-format on */


#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_START_OF_FRAME \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_START_OF_FRAME)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_END_OF_FRAME \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_END_OF_FRAME)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_CDAF_PRIMARY \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_CDAF_PRIMARY)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_CDAF_WINDOWS \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_CDAF_WINDOWS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_AE_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_AE_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_AWB_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_AWB_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_LSC_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_LSC_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_FLICKER_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_FLICKER_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_HISTOGRAM0 \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_HISTOGRAM0)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_HISTOGRAM1 \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_HISTOGRAM1)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_HISTOGRAM2 \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_HISTOGRAM2)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_UAE_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_UAE_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_BAYER_MOTION_METERING \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_BAYER_MOTION_METERING)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_PDAF_START_OF_FRAME \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_PDAF_START_OF_FRAME)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_PDAF_EARLY \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_PDAF_EARLY)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX0_PDAF_END_OF_FRAME \
  EVENT_ID(G3AA_INTERRUPTS_CTX0_BASE, \
	   G3AA_INTERRUPTS_CTX0_PDAF_END_OF_FRAME)

#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_START_OF_FRAME \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_START_OF_FRAME)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_END_OF_FRAME \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_END_OF_FRAME)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_CDAF_PRIMARY \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_CDAF_PRIMARY)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_CDAF_WINDOWS \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_CDAF_WINDOWS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_AE_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_AE_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_AWB_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_AWB_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_LSC_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_LSC_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_FLICKER_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_FLICKER_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_HISTOGRAM0 \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_HISTOGRAM0)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_HISTOGRAM1 \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_HISTOGRAM1)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_HISTOGRAM2 \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_HISTOGRAM2)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_UAE_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_UAE_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_BAYER_MOTION_METERING \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_BAYER_MOTION_METERING)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_PDAF_START_OF_FRAME \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_PDAF_START_OF_FRAME)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_PDAF_EARLY \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_PDAF_EARLY)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX1_PDAF_END_OF_FRAME \
  EVENT_ID(G3AA_INTERRUPTS_CTX1_BASE, \
	   G3AA_INTERRUPTS_CTX1_PDAF_END_OF_FRAME)

#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_START_OF_FRAME \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_START_OF_FRAME)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_END_OF_FRAME \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_END_OF_FRAME)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_CDAF_PRIMARY \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_CDAF_PRIMARY)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_CDAF_WINDOWS \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_CDAF_WINDOWS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_AE_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_AE_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_AWB_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_AWB_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_LSC_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_LSC_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_FLICKER_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_FLICKER_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_HISTOGRAM0 \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_HISTOGRAM0)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_HISTOGRAM1 \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_HISTOGRAM1)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_HISTOGRAM2 \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_HISTOGRAM2)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_UAE_STATS \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_UAE_STATS)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_BAYER_MOTION_METERING \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_BAYER_MOTION_METERING)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_PDAF_START_OF_FRAME \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_PDAF_START_OF_FRAME)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_PDAF_EARLY \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_PDAF_EARLY)
#define LWIS_PLATFORM_EVENT_ID_G3AA_CTX2_PDAF_END_OF_FRAME \
  EVENT_ID(G3AA_INTERRUPTS_CTX2_BASE, \
	   G3AA_INTERRUPTS_CTX2_PDAF_END_OF_FRAME)



#endif /* DT_BINDINGS_LWIS_PLATFORM_GS101_G3AA_H_ */
