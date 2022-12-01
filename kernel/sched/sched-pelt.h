/* SPDX-License-Identifier: GPL-2.0 */
/* Generated by Documentation/scheduler/sched-pelt; do not modify. */

#ifdef CONFIG_PELT_UTIL_HALFLIFE_32
static const u32 runnable_avg_yN_inv[] = {
	0xffffffff,0xfa83b2da,0xf5257d14,0xefe4b99a,
	0xeac0c6e6,0xe5b906e6,0xe0ccdeeb,0xdbfbb796,
	0xd744fcc9,0xd2a81d91,0xce248c14,0xc9b9bd85,
	0xc5672a10,0xc12c4cc9,0xbd08a39e,0xb8fbaf46,
	0xb504f333,0xb123f581,0xad583ee9,0xa9a15ab4,
	0xa5fed6a9,0xa2704302,0x9ef5325f,0x9b8d39b9,
	0x9837f050,0x94f4efa8,0x91c3d373,0x8ea4398a,
	0x8b95c1e3,0x88980e80,0x85aac367,0x82cd8698,
};

static const u32 runnable_avg_yN_sum[] = {
	    0, 1002, 1982, 2941, 3880, 4798, 5697, 6576, 7437, 8279, 9103,
	 9909,10698,11470,12226,12966,13690,14398,15091,15769,16433,17082,
	17718,18340,18949,19545,20128,20698,21256,21802,22336,22859,23371,
};

#define LOAD_AVG_PERIOD 32
#define LOAD_AVG_MAX 47742
#define LOAD_AVG_MAX_N 345

#endif

#ifdef CONFIG_PELT_UTIL_HALFLIFE_16
static const u32 runnable_avg_yN_inv[] = {
	0xffffffff,0xf5257d14,0xeac0c6e6,0xe0ccdeeb,
	0xd744fcc9,0xce248c14,0xc5672a10,0xbd08a39e,
	0xb504f333,0xad583ee9,0xa5fed6a9,0x9ef5325f,
	0x9837f050,0x91c3d373,0x8b95c1e3,0x85aac367,
};

static const u32 runnable_avg_yN_sum[] = {
	    0,  980, 1919, 2818, 3679, 4503, 5292, 6048, 6772, 7465, 8129,
	 8764, 9373, 9956,10514,11048,11560,
};

#define LOAD_AVG_PERIOD 16
#define LOAD_AVG_MAX 24130
#define LOAD_AVG_MAX_N 172

#endif

#ifdef CONFIG_PELT_UTIL_HALFLIFE_8
static const u32 runnable_avg_yN_inv[] = {
	0xffffffff,0xeac0c6e6,0xd744fcc9,0xc5672a10,
	0xb504f333,0xa5fed6a9,0x9837f050,0x8b95c1e3,
};

static const u32 runnable_avg_yN_sum[] = {
	    0,  939, 1800, 2589, 3313, 3977, 4585, 5143, 5655,
};

#define LOAD_AVG_PERIOD 8
#define LOAD_AVG_MAX 12326
#define LOAD_AVG_MAX_N 85

#endif
