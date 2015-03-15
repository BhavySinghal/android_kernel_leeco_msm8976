/*
 * Copyright (c) 2011-2013, The Linux Foundation. All rights reserved.
 * Copyright (c) 2013, LGE Inc. All rights reserved
 * Copyright (c) 2014 savoca <adeddo27@gmail.com>
 * Copyright (c) 2014 Paul Reioux <reioux@gmail.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/device.h>
#include <linux/platform_device.h>
#include <linux/init.h>
#include <linux/module.h>

#include "mdss_mdp.h"
<<<<<<< HEAD
<<<<<<< HEAD

#define DEF_PCC 0x100
=======

#define NUM_QLUT 0x100
>>>>>>> 343fb15... msm: mdss: Keep KCAL within its own source file
#define DEF_PA 0xff
#define PCC_ADJ 0x80

struct kcal_lut_data {
<<<<<<< HEAD
	int red;
	int green;
	int blue;
	int minimum;
	int enable;
	int invert;
	int sat;
	int hue;
	int val;
	int cont;
};

static uint32_t igc_inverted[IGC_LUT_ENTRIES] = {
=======
    int red;
    int green;
    int blue;
    int minimum;
    int enable;
    int invert;
    int sat;
    int hue;
    int val;
    int cont;
};

static uint32_t igc_Table_Inverted[IGC_LUT_ENTRIES] = {
>>>>>>> 343fb15... msm: mdss: Keep KCAL within its own source file
	267390960, 266342368, 265293776, 264245184,
	263196592, 262148000, 261099408, 260050816,
	259002224, 257953632, 256905040, 255856448,
	254807856, 253759264, 252710672, 251662080,
	250613488, 249564896, 248516304, 247467712,
	246419120, 245370528, 244321936, 243273344,
	242224752, 241176160, 240127568, 239078976,
	238030384, 236981792, 235933200, 234884608,
	233836016, 232787424, 231738832, 230690240,
	229641648, 228593056, 227544464, 226495872,
	225447280, 224398688, 223350096, 222301504,
	221252912, 220204320, 219155728, 218107136,
	217058544, 216009952, 214961360, 213912768,
	212864176, 211815584, 210766992, 209718400,
	208669808, 207621216, 206572624, 205524032,
	204475440, 203426848, 202378256, 201329664,
	200281072, 199232480, 198183888, 197135296,
	196086704, 195038112, 193989520, 192940928,
	191892336, 190843744, 189795152, 188746560,
	187697968, 186649376, 185600784, 184552192,
	183503600, 182455008, 181406416, 180357824,
	179309232, 178260640, 177212048, 176163456,
	175114864, 174066272, 173017680, 171969088,
	170920496, 169871904, 168823312, 167774720,
	166726128, 165677536, 164628944, 163580352,
	162531760, 161483168, 160434576, 159385984,
	158337392, 157288800, 156240208, 155191616,
	154143024, 153094432, 152045840, 150997248,
	149948656, 148900064, 147851472, 146802880,
	145754288, 144705696, 143657104, 142608512,
	141559920, 140511328, 139462736, 138414144,
	137365552, 136316960, 135268368, 134219776,
	133171184, 132122592, 131074000, 130025408,
	128976816, 127928224, 126879632, 125831040,
	124782448, 123733856, 122685264, 121636672,
	120588080, 119539488, 118490896, 117442304,
	116393712, 115345120, 114296528, 113247936,
	112199344, 111150752, 110102160, 109053568,
	108004976, 106956384, 105907792, 104859200,
	103810608, 102762016, 101713424, 100664832,
	99616240, 98567648, 97519056, 96470464,
	95421872, 94373280, 93324688, 92276096,
	91227504, 90178912, 89130320, 88081728,
	87033136, 85984544, 84935952, 83887360,
	82838768, 81790176, 80741584, 79692992,
	78644400, 77595808, 76547216, 75498624,
	74450032, 73401440, 72352848, 71304256,
	70255664, 69207072, 68158480, 67109888,
	66061296, 65012704, 63964112, 62915520,
	61866928, 60818336, 59769744, 58721152,
	57672560, 56623968, 55575376, 54526784,
	53478192, 52429600, 51381008, 50332416,
	49283824, 48235232, 47186640, 46138048,
	45089456, 44040864, 42992272, 41943680,
	40895088, 39846496, 38797904, 37749312,
	36700720, 35652128, 34603536, 33554944,
	32506352, 31457760, 30409168, 29360576,
	28311984, 27263392, 26214800, 25166208,
	24117616, 23069024, 22020432, 20971840,
	19923248, 18874656, 17826064, 16777472,
	15728880, 14680288, 13631696, 12583104,
	11534512, 10485920, 9437328, 8388736,
	7340144, 6291552, 5242960, 4194368,
	3145776, 2097184, 1048592, 0
};

<<<<<<< HEAD
static uint32_t igc_rgb[IGC_LUT_ENTRIES] = {
=======
static uint32_t igc_Table_RGB[IGC_LUT_ENTRIES] = {
>>>>>>> 343fb15... msm: mdss: Keep KCAL within its own source file
	4080, 4064, 4048, 4032, 4016, 4000, 3984, 3968, 3952, 3936, 3920, 3904,
	3888, 3872, 3856, 3840, 3824, 3808, 3792, 3776, 3760, 3744, 3728, 3712,
	3696, 3680, 3664, 3648, 3632, 3616, 3600, 3584, 3568, 3552, 3536, 3520,
	3504, 3488, 3472, 3456, 3440, 3424, 3408, 3392, 3376, 3360, 3344, 3328,
	3312, 3296, 3280, 3264, 3248, 3232, 3216, 3200, 3184, 3168, 3152, 3136,
	3120, 3104, 3088, 3072, 3056, 3040, 3024, 3008, 2992, 2976, 2960, 2944,
	2928, 2912, 2896, 2880, 2864, 2848, 2832, 2816, 2800, 2784, 2768, 2752,
	2736, 2720, 2704, 2688, 2672, 2656, 2640, 2624, 2608, 2592, 2576, 2560,
	2544, 2528, 2512, 2496, 2480, 2464, 2448, 2432, 2416, 2400, 2384, 2368,
	2352, 2336, 2320, 2304, 2288, 2272, 2256, 2240, 2224, 2208, 2192, 2176,
	2160, 2144, 2128, 2112, 2096, 2080, 2064, 2048, 2032, 2016, 2000, 1984,
	1968, 1952, 1936, 1920, 1904, 1888, 1872, 1856, 1840, 1824, 1808, 1792,
	1776, 1760, 1744, 1728, 1712, 1696, 1680, 1664, 1648, 1632, 1616, 1600,
	1584, 1568, 1552, 1536, 1520, 1504, 1488, 1472, 1456, 1440, 1424, 1408,
	1392, 1376, 1360, 1344, 1328, 1312, 1296, 1280, 1264, 1248, 1232, 1216,
	1200, 1184, 1168, 1152, 1136, 1120, 1104, 1088, 1072, 1056, 1040, 1024,
	1008, 992, 976, 960, 944, 928, 912, 896, 880, 864, 848, 832,
	816, 800, 784, 768, 752, 736, 720, 704, 688, 672, 656, 640,
	624, 608, 592, 576, 560, 544, 528, 512, 496, 480, 464, 448,
	432, 416, 400, 384, 368, 352, 336, 320, 304, 288, 272, 256,
	240, 224, 208, 192, 176, 160, 144, 128, 112, 96, 80, 64,
	48, 32, 16, 0
};

<<<<<<< HEAD
<<<<<<< HEAD
static int mdss_mdp_kcal_display_commit(void)
{
	int i;
	int ret = 0;
	struct mdss_mdp_ctl *ctl;
	struct mdss_data_type *mdata = mdss_mdp_get_mdata();

	for (i = 0; i < mdata->nctl; i++) {
		ctl = mdata->ctl_off + i;
		/* pp setup requires mfd */
		if (mdss_mdp_ctl_is_power_on(ctl) && ctl->mfd &&
				ctl->mfd->index == 0) {
			ret = mdss_mdp_pp_setup(ctl);
			if (ret)
				pr_err("%s: setup failed: %d\n", __func__, ret);
		}
	}

	return ret;
}

static void mdss_mdp_kcal_update_pcc(struct kcal_lut_data *lut_data)
=======
static void mdss_mdp_pp_kcal_update(struct kcal_lut_data *lut_data)
>>>>>>> 343fb15... msm: mdss: Keep KCAL within its own source file
=======
static void mdss_mdp_kcal_update_pcc(struct kcal_lut_data *lut_data)
>>>>>>> ad8a561... msm: mdss: KCAL: Allow kcal_enable to control all post-processing features
{
	u32 copyback = 0;
	struct mdp_pcc_cfg_data pcc_config;

	memset(&pcc_config, 0, sizeof(struct mdp_pcc_cfg_data));

<<<<<<< HEAD
	lut_data->red = lut_data->red < lut_data->minimum ?
		lut_data->minimum : lut_data->red;
	lut_data->green = lut_data->green < lut_data->minimum ?
		lut_data->minimum : lut_data->green;
	lut_data->blue = lut_data->blue < lut_data->minimum ?
		lut_data->minimum : lut_data->blue;

	pcc_config.block = MDP_LOGICAL_BLOCK_DISP_0;
	pcc_config.ops = lut_data->enable ?
		MDP_PP_OPS_WRITE | MDP_PP_OPS_ENABLE :
			MDP_PP_OPS_WRITE | MDP_PP_OPS_DISABLE;
=======
	pcc_config.block = MDP_LOGICAL_BLOCK_DISP_0;
	pcc_config.ops = lut_data->enable ? MDP_PP_OPS_WRITE | MDP_PP_OPS_ENABLE :
		MDP_PP_OPS_WRITE | MDP_PP_OPS_DISABLE;
>>>>>>> 343fb15... msm: mdss: Keep KCAL within its own source file
	pcc_config.r.r = lut_data->red * PCC_ADJ;
	pcc_config.g.g = lut_data->green * PCC_ADJ;
	pcc_config.b.b = lut_data->blue * PCC_ADJ;

	mdss_mdp_pcc_config(&pcc_config, &copyback);
}

<<<<<<< HEAD
<<<<<<< HEAD
static void mdss_mdp_kcal_read_pcc(struct kcal_lut_data *lut_data)
{
	u32 copyback = 0;
	struct mdp_pcc_cfg_data pcc_config;

	memset(&pcc_config, 0, sizeof(struct mdp_pcc_cfg_data));

	pcc_config.block = MDP_LOGICAL_BLOCK_DISP_0;
	pcc_config.ops = MDP_PP_OPS_READ;

	mdss_mdp_pcc_config(&pcc_config, &copyback);

	/* LiveDisplay disables pcc when using default values and regs
	 * are zeroed on pp resume, so throw these values out.
	 */
	if (!pcc_config.r.r && !pcc_config.g.g && !pcc_config.b.b)
		return;

	lut_data->red = pcc_config.r.r / PCC_ADJ;
	lut_data->green = pcc_config.g.g / PCC_ADJ;
	lut_data->blue = pcc_config.b.b / PCC_ADJ;
}

static void mdss_mdp_kcal_update_pa(struct kcal_lut_data *lut_data)
=======
static void mdss_mdp_pp_kcal_pa(struct kcal_lut_data *lut_data)
>>>>>>> 343fb15... msm: mdss: Keep KCAL within its own source file
=======
static void mdss_mdp_kcal_update_pa(struct kcal_lut_data *lut_data)
>>>>>>> ad8a561... msm: mdss: KCAL: Allow kcal_enable to control all post-processing features
{
	u32 copyback = 0;
	struct mdp_pa_cfg_data pa_config;
	struct mdp_pa_v2_cfg_data pa_v2_config;
	struct mdss_data_type *mdata = mdss_mdp_get_mdata();

	if (mdata->mdp_rev < MDSS_MDP_HW_REV_103) {
		memset(&pa_config, 0, sizeof(struct mdp_pa_cfg_data));

		pa_config.block = MDP_LOGICAL_BLOCK_DISP_0;
<<<<<<< HEAD
<<<<<<< HEAD
		pa_config.pa_data.flags = lut_data->enable ?
			MDP_PP_OPS_WRITE | MDP_PP_OPS_ENABLE :
				MDP_PP_OPS_WRITE | MDP_PP_OPS_DISABLE;
=======
		pa_config.pa_data.flags = MDP_PP_OPS_WRITE | MDP_PP_OPS_ENABLE;
>>>>>>> 343fb15... msm: mdss: Keep KCAL within its own source file
=======
		pa_config.pa_data.flags = lut_data->enable ? MDP_PP_OPS_WRITE | MDP_PP_OPS_ENABLE :
			MDP_PP_OPS_WRITE | MDP_PP_OPS_DISABLE;
>>>>>>> ad8a561... msm: mdss: KCAL: Allow kcal_enable to control all post-processing features
		pa_config.pa_data.hue_adj = lut_data->hue;
		pa_config.pa_data.sat_adj = lut_data->sat;
		pa_config.pa_data.val_adj = lut_data->val;
		pa_config.pa_data.cont_adj = lut_data->cont;

		mdss_mdp_pa_config(&pa_config, &copyback);
	} else {
		memset(&pa_v2_config, 0, sizeof(struct mdp_pa_v2_cfg_data));

		pa_v2_config.block = MDP_LOGICAL_BLOCK_DISP_0;
<<<<<<< HEAD
<<<<<<< HEAD
		pa_v2_config.pa_v2_data.flags = lut_data->enable ?
			MDP_PP_OPS_WRITE | MDP_PP_OPS_ENABLE :
				MDP_PP_OPS_WRITE | MDP_PP_OPS_DISABLE;
=======
		pa_v2_config.pa_v2_data.flags = MDP_PP_OPS_WRITE | MDP_PP_OPS_ENABLE;
>>>>>>> 343fb15... msm: mdss: Keep KCAL within its own source file
=======
		pa_v2_config.pa_v2_data.flags = lut_data->enable ? MDP_PP_OPS_WRITE | MDP_PP_OPS_ENABLE :
			MDP_PP_OPS_WRITE | MDP_PP_OPS_DISABLE;
>>>>>>> ad8a561... msm: mdss: KCAL: Allow kcal_enable to control all post-processing features
		pa_v2_config.pa_v2_data.flags |= MDP_PP_PA_HUE_ENABLE;
		pa_v2_config.pa_v2_data.flags |= MDP_PP_PA_HUE_MASK;
		pa_v2_config.pa_v2_data.flags |= MDP_PP_PA_SAT_ENABLE;
		pa_v2_config.pa_v2_data.flags |= MDP_PP_PA_SAT_MASK;
		pa_v2_config.pa_v2_data.flags |= MDP_PP_PA_VAL_ENABLE;
		pa_v2_config.pa_v2_data.flags |= MDP_PP_PA_VAL_MASK;
		pa_v2_config.pa_v2_data.flags |= MDP_PP_PA_CONT_ENABLE;
		pa_v2_config.pa_v2_data.flags |= MDP_PP_PA_CONT_MASK;
		pa_v2_config.pa_v2_data.global_hue_adj = lut_data->hue;
		pa_v2_config.pa_v2_data.global_sat_adj = lut_data->sat;
		pa_v2_config.pa_v2_data.global_val_adj = lut_data->val;
		pa_v2_config.pa_v2_data.global_cont_adj = lut_data->cont;

		mdss_mdp_pa_v2_config(&pa_v2_config, &copyback);
	}
}

<<<<<<< HEAD
<<<<<<< HEAD
static void mdss_mdp_kcal_update_igc(struct kcal_lut_data *lut_data)
=======
static void mdss_mdp_pp_kcal_invert(struct kcal_lut_data *lut_data)
>>>>>>> 343fb15... msm: mdss: Keep KCAL within its own source file
=======
static void mdss_mdp_kcal_update_igc(struct kcal_lut_data *lut_data)
>>>>>>> ad8a561... msm: mdss: KCAL: Allow kcal_enable to control all post-processing features
{
	u32 copyback = 0, copy_from_kernel = 1;
	struct mdp_igc_lut_data igc_config;

	memset(&igc_config, 0, sizeof(struct mdp_igc_lut_data));

	igc_config.block = MDP_LOGICAL_BLOCK_DISP_0;
<<<<<<< HEAD
<<<<<<< HEAD
	igc_config.ops = lut_data->invert && lut_data->enable ?
		MDP_PP_OPS_WRITE | MDP_PP_OPS_ENABLE :
			MDP_PP_OPS_WRITE | MDP_PP_OPS_DISABLE;
	igc_config.len = IGC_LUT_ENTRIES;
	igc_config.c0_c1_data = igc_inverted;
	igc_config.c2_data = igc_rgb;

	mdss_mdp_igc_lut_config(&igc_config, &copyback, copy_from_kernel);
}

static ssize_t kcal_store(struct device *dev, struct device_attribute *attr,
						const char *buf, size_t count)
{
	int kcal_r, kcal_g, kcal_b, r;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	r = sscanf(buf, "%d %d %d", &kcal_r, &kcal_g, &kcal_b);
	if ((r != 3) || (kcal_r < 1 || kcal_r > 256) ||
		(kcal_g < 1 || kcal_g > 256) || (kcal_b < 1 || kcal_b > 256))
=======
#include "mdss_mdp_kcal_ctrl.h"
=======
	igc_config.ops = lut_data->invert ? MDP_PP_OPS_WRITE | MDP_PP_OPS_ENABLE :
=======
	igc_config.ops = lut_data->invert && lut_data->enable ? MDP_PP_OPS_WRITE | MDP_PP_OPS_ENABLE :
>>>>>>> ad8a561... msm: mdss: KCAL: Allow kcal_enable to control all post-processing features
		MDP_PP_OPS_WRITE | MDP_PP_OPS_DISABLE;
	igc_config.len = IGC_LUT_ENTRIES;
	igc_config.c0_c1_data = &igc_Table_Inverted[0];
	igc_config.c2_data = &igc_Table_RGB[0];

	mdss_mdp_igc_lut_config(&igc_config, &copyback, copy_from_kernel);
}
>>>>>>> 343fb15... msm: mdss: Keep KCAL within its own source file

static void kcal_apply_values(struct kcal_lut_data *lut_data)
{
	lut_data->red = (lut_data->red < lut_data->minimum) ?
		lut_data->minimum : lut_data->red;
	lut_data->green = (lut_data->green < lut_data->minimum) ?
		lut_data->minimum : lut_data->green;
	lut_data->blue = (lut_data->blue < lut_data->minimum) ?
		lut_data->minimum : lut_data->blue;

	mdss_mdp_kcal_update_pcc(lut_data);
}

static ssize_t kcal_store(struct device *dev, struct device_attribute *attr,
						const char *buf, size_t count)
{
	int kcal_r, kcal_g, kcal_b;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	if (count > 12)
		return -EINVAL;

	sscanf(buf, "%d %d %d", &kcal_r, &kcal_g, &kcal_b);

	if (kcal_r < 0 || kcal_r > 256)
		return -EINVAL;

	if (kcal_g < 0 || kcal_g > 256)
		return -EINVAL;

	if (kcal_b < 0 || kcal_b > 256)
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
		return -EINVAL;

	lut_data->red = kcal_r;
	lut_data->green = kcal_g;
	lut_data->blue = kcal_b;

<<<<<<< HEAD
	mdss_mdp_kcal_update_pcc(lut_data);
	mdss_mdp_kcal_display_commit();
=======
	kcal_apply_values(lut_data);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]

	return count;
}

static ssize_t kcal_show(struct device *dev, struct device_attribute *attr,
								char *buf)
{
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

<<<<<<< HEAD
	mdss_mdp_kcal_read_pcc(lut_data);

	return scnprintf(buf, PAGE_SIZE, "%d %d %d\n",
		lut_data->red, lut_data->green, lut_data->blue);
=======
	return sprintf(buf, "%d %d %d\n", lut_data->red, lut_data->green,
		lut_data->blue);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
}

static ssize_t kcal_min_store(struct device *dev,
		struct device_attribute *attr, const char *buf, size_t count)
{
<<<<<<< HEAD
	int kcal_min, r;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	r = kstrtoint(buf, 10, &kcal_min);
	if ((r) || (kcal_min < 1 || kcal_min > 256))
=======
	int kcal_min;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	if (count > 4)
		return -EINVAL;

	sscanf(buf, "%d", &kcal_min);

	if (kcal_min < 0 || kcal_min > 256)
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
		return -EINVAL;

	lut_data->minimum = kcal_min;

<<<<<<< HEAD
	mdss_mdp_kcal_update_pcc(lut_data);
	mdss_mdp_kcal_display_commit();
=======
	kcal_apply_values(lut_data);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]

	return count;
}

static ssize_t kcal_min_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

<<<<<<< HEAD
	return scnprintf(buf, PAGE_SIZE, "%d\n", lut_data->minimum);
=======
	return sprintf(buf, "%d\n", lut_data->minimum);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
}

static ssize_t kcal_enable_store(struct device *dev,
		struct device_attribute *attr, const char *buf, size_t count)
{
<<<<<<< HEAD
	int kcal_enable, r;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	r = kstrtoint(buf, 10, &kcal_enable);
	if ((r) || (kcal_enable != 0 && kcal_enable != 1) ||
		(lut_data->enable == kcal_enable))
=======
	int kcal_enable;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	if (count != 2)
		return -EINVAL;

	sscanf(buf, "%d", &kcal_enable);

	if (kcal_enable != 0 && kcal_enable != 1)
		return -EINVAL;

	if (lut_data->enable == kcal_enable)
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
		return -EINVAL;

	lut_data->enable = kcal_enable;

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	mdss_mdp_kcal_update_pcc(lut_data);
	mdss_mdp_kcal_update_pa(lut_data);
	mdss_mdp_kcal_update_igc(lut_data);
	mdss_mdp_kcal_display_commit();
=======
	mdss_mdp_pp_kcal_enable(lut_data->enable ? true : false);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
=======
	mdss_mdp_pp_kcal_update(lut_data);
>>>>>>> aa03911... msm: mdss: Replace PGC implementation with PCC for KCAL
=======
	mdss_mdp_kcal_update_pcc(lut_data);
	mdss_mdp_kcal_update_pa(lut_data);
	mdss_mdp_kcal_update_igc(lut_data);
>>>>>>> ad8a561... msm: mdss: KCAL: Allow kcal_enable to control all post-processing features

	return count;
}

static ssize_t kcal_enable_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

<<<<<<< HEAD
	return scnprintf(buf, PAGE_SIZE, "%d\n", lut_data->enable);
=======
	return sprintf(buf, "%d\n", lut_data->enable);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
}

static ssize_t kcal_invert_store(struct device *dev,
		struct device_attribute *attr, const char *buf, size_t count)
{
<<<<<<< HEAD
	int kcal_invert, r;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	r = kstrtoint(buf, 10, &kcal_invert);
	if ((r) || (kcal_invert != 0 && kcal_invert != 1) ||
		(lut_data->invert == kcal_invert))
=======
	int kcal_invert;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	if (count != 2)
		return -EINVAL;

	sscanf(buf, "%d", &kcal_invert);

	if (kcal_invert != 0 && kcal_invert != 1)
		return -EINVAL;

	if (lut_data->invert == kcal_invert)
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
		return -EINVAL;

	lut_data->invert = kcal_invert;

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	mdss_mdp_kcal_update_igc(lut_data);
	mdss_mdp_kcal_display_commit();
=======
	mdss_mdp_pp_kcal_invert(lut_data->invert);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
=======
	mdss_mdp_pp_kcal_invert(lut_data);
>>>>>>> aa03911... msm: mdss: Replace PGC implementation with PCC for KCAL
=======
	mdss_mdp_kcal_update_igc(lut_data);
>>>>>>> ad8a561... msm: mdss: KCAL: Allow kcal_enable to control all post-processing features

	return count;
}

static ssize_t kcal_invert_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

<<<<<<< HEAD
	return scnprintf(buf, PAGE_SIZE, "%d\n", lut_data->invert);
=======
	return sprintf(buf, "%d\n", lut_data->invert);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
}

static ssize_t kcal_sat_store(struct device *dev,
		struct device_attribute *attr, const char *buf, size_t count)
{
<<<<<<< HEAD
	int kcal_sat, r;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	r = kstrtoint(buf, 10, &kcal_sat);
	if ((r) || ((kcal_sat < 224 || kcal_sat > 383) && kcal_sat != 128))
=======
	int kcal_sat;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	if (count != 4)
		return -EINVAL;

	sscanf(buf, "%d", &kcal_sat);

	if ((kcal_sat < 224 || kcal_sat > 383) && kcal_sat != 128)
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
		return -EINVAL;

	lut_data->sat = kcal_sat;

<<<<<<< HEAD
<<<<<<< HEAD
	mdss_mdp_kcal_update_pa(lut_data);
	mdss_mdp_kcal_display_commit();
=======
	mdss_mdp_pp_kcal_pa(lut_data);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
=======
	mdss_mdp_kcal_update_pa(lut_data);
>>>>>>> ad8a561... msm: mdss: KCAL: Allow kcal_enable to control all post-processing features

	return count;
}

static ssize_t kcal_sat_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

<<<<<<< HEAD
	return scnprintf(buf, PAGE_SIZE, "%d\n", lut_data->sat);
=======
	return sprintf(buf, "%d\n", lut_data->sat);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
}

static ssize_t kcal_hue_store(struct device *dev,
		struct device_attribute *attr, const char *buf, size_t count)
{
<<<<<<< HEAD
	int kcal_hue, r;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	r = kstrtoint(buf, 10, &kcal_hue);
	if ((r) || (kcal_hue < 0 || kcal_hue > 1536))
=======
	int kcal_hue;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	if (count > 5)
		return -EINVAL;

	sscanf(buf, "%d", &kcal_hue);

	if (kcal_hue < 0 || kcal_hue > 1536)
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
		return -EINVAL;

	lut_data->hue = kcal_hue;

<<<<<<< HEAD
<<<<<<< HEAD
	mdss_mdp_kcal_update_pa(lut_data);
	mdss_mdp_kcal_display_commit();
=======
	mdss_mdp_pp_kcal_pa(lut_data);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
=======
	mdss_mdp_kcal_update_pa(lut_data);
>>>>>>> ad8a561... msm: mdss: KCAL: Allow kcal_enable to control all post-processing features

	return count;
}

static ssize_t kcal_hue_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

<<<<<<< HEAD
	return scnprintf(buf, PAGE_SIZE, "%d\n", lut_data->hue);
=======
	return sprintf(buf, "%d\n", lut_data->hue);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
}

static ssize_t kcal_val_store(struct device *dev,
		struct device_attribute *attr, const char *buf, size_t count)
{
<<<<<<< HEAD
	int kcal_val, r;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	r = kstrtoint(buf, 10, &kcal_val);
	if ((r) || (kcal_val < 128 || kcal_val > 383))
=======
	int kcal_val;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	if (count != 4)
		return -EINVAL;

	sscanf(buf, "%d", &kcal_val);

	if (kcal_val < 128 || kcal_val > 383)
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
		return -EINVAL;

	lut_data->val = kcal_val;

<<<<<<< HEAD
<<<<<<< HEAD
	mdss_mdp_kcal_update_pa(lut_data);
	mdss_mdp_kcal_display_commit();
=======
	mdss_mdp_pp_kcal_pa(lut_data);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
=======
	mdss_mdp_kcal_update_pa(lut_data);
>>>>>>> ad8a561... msm: mdss: KCAL: Allow kcal_enable to control all post-processing features

	return count;
}

static ssize_t kcal_val_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

<<<<<<< HEAD
	return scnprintf(buf, PAGE_SIZE, "%d\n", lut_data->val);
=======
	return sprintf(buf, "%d\n", lut_data->val);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
}

static ssize_t kcal_cont_store(struct device *dev,
		struct device_attribute *attr, const char *buf, size_t count)
{
<<<<<<< HEAD
	int kcal_cont, r;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	r = kstrtoint(buf, 10, &kcal_cont);
	if ((r) || (kcal_cont < 128 || kcal_cont > 383))
=======
	int kcal_cont;
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

	if (count != 4)
		return -EINVAL;

	sscanf(buf, "%d", &kcal_cont);

	if (kcal_cont < 128 || kcal_cont > 383)
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
		return -EINVAL;

	lut_data->cont = kcal_cont;

<<<<<<< HEAD
<<<<<<< HEAD
	mdss_mdp_kcal_update_pa(lut_data);
	mdss_mdp_kcal_display_commit();
=======
	mdss_mdp_pp_kcal_pa(lut_data);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
=======
	mdss_mdp_kcal_update_pa(lut_data);
>>>>>>> ad8a561... msm: mdss: KCAL: Allow kcal_enable to control all post-processing features

	return count;
}

static ssize_t kcal_cont_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	struct kcal_lut_data *lut_data = dev_get_drvdata(dev);

<<<<<<< HEAD
	return scnprintf(buf, PAGE_SIZE, "%d\n", lut_data->cont);
}

static DEVICE_ATTR(kcal, S_IWUSR | S_IRUGO, kcal_show, kcal_store);
static DEVICE_ATTR(kcal_min, S_IWUSR | S_IRUGO, kcal_min_show, kcal_min_store);
static DEVICE_ATTR(kcal_enable, S_IWUSR | S_IRUGO, kcal_enable_show,
	kcal_enable_store);
static DEVICE_ATTR(kcal_invert, S_IWUSR | S_IRUGO, kcal_invert_show,
	kcal_invert_store);
static DEVICE_ATTR(kcal_sat, S_IWUSR | S_IRUGO, kcal_sat_show, kcal_sat_store);
static DEVICE_ATTR(kcal_hue, S_IWUSR | S_IRUGO, kcal_hue_show, kcal_hue_store);
static DEVICE_ATTR(kcal_val, S_IWUSR | S_IRUGO, kcal_val_show, kcal_val_store);
static DEVICE_ATTR(kcal_cont, S_IWUSR | S_IRUGO, kcal_cont_show,
	kcal_cont_store);

static int kcal_ctrl_probe(struct platform_device *pdev)
=======
	return sprintf(buf, "%d\n", lut_data->cont);
}

static DEVICE_ATTR(kcal, 0644, kcal_show, kcal_store);
static DEVICE_ATTR(kcal_min, 0644, kcal_min_show, kcal_min_store);
static DEVICE_ATTR(kcal_enable, 0644, kcal_enable_show, kcal_enable_store);
static DEVICE_ATTR(kcal_invert, 0644, kcal_invert_show, kcal_invert_store);
static DEVICE_ATTR(kcal_sat, 0644, kcal_sat_show, kcal_sat_store);
static DEVICE_ATTR(kcal_hue, 0644, kcal_hue_show, kcal_hue_store);
static DEVICE_ATTR(kcal_val, 0644, kcal_val_show, kcal_val_store);
static DEVICE_ATTR(kcal_cont, 0644, kcal_cont_show, kcal_cont_store);

<<<<<<< HEAD
static int __devinit kcal_ctrl_probe(struct platform_device *pdev)
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
=======
static int kcal_ctrl_probe(struct platform_device *pdev)
>>>>>>> cd25252... msm: mdss: Remove deprecated __dev* markings
{
	int ret;
	struct kcal_lut_data *lut_data;

<<<<<<< HEAD
	lut_data = devm_kzalloc(&pdev->dev, sizeof(*lut_data), GFP_KERNEL);
=======
	lut_data = kzalloc(sizeof(*lut_data), GFP_KERNEL);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
	if (!lut_data) {
		pr_err("%s: failed to allocate memory for lut_data\n",
			__func__);
		return -ENOMEM;
	}

<<<<<<< HEAD
<<<<<<< HEAD
	platform_set_drvdata(pdev, lut_data);

	lut_data->enable = 0x1;
	lut_data->red = DEF_PCC;
	lut_data->green = DEF_PCC;
	lut_data->blue = DEF_PCC;
	lut_data->minimum = 0x23;
	lut_data->invert = 0x0;
	lut_data->hue = 0x0;
	lut_data->sat = DEF_PA;
	lut_data->val = DEF_PA;
	lut_data->cont = DEF_PA;

	mdss_mdp_kcal_update_pcc(lut_data);
	mdss_mdp_kcal_update_pa(lut_data);
	mdss_mdp_kcal_update_igc(lut_data);
	mdss_mdp_kcal_display_commit();
=======
	mdss_mdp_pp_kcal_enable(true);

	mdss_mdp_pp_kcal_update(NUM_QLUT, NUM_QLUT, NUM_QLUT);

=======
>>>>>>> aa03911... msm: mdss: Replace PGC implementation with PCC for KCAL
	lut_data->red = lut_data->green = lut_data->blue = NUM_QLUT;
	lut_data->minimum = 35;
	lut_data->enable = 1;
	lut_data->invert = 0;
	lut_data->sat = DEF_PA;
	lut_data->hue = 0;
	lut_data->val = DEF_PA;
	lut_data->cont = DEF_PA;

	platform_set_drvdata(pdev, lut_data);
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]

	ret = device_create_file(&pdev->dev, &dev_attr_kcal);
	ret |= device_create_file(&pdev->dev, &dev_attr_kcal_min);
	ret |= device_create_file(&pdev->dev, &dev_attr_kcal_enable);
	ret |= device_create_file(&pdev->dev, &dev_attr_kcal_invert);
	ret |= device_create_file(&pdev->dev, &dev_attr_kcal_sat);
	ret |= device_create_file(&pdev->dev, &dev_attr_kcal_hue);
	ret |= device_create_file(&pdev->dev, &dev_attr_kcal_val);
	ret |= device_create_file(&pdev->dev, &dev_attr_kcal_cont);
<<<<<<< HEAD
	if (ret) {
		pr_err("%s: unable to create sysfs entries\n", __func__);
		return ret;
	}

	return 0;
}

static int kcal_ctrl_remove(struct platform_device *pdev)
{
=======
	if (ret)
		pr_err("%s: unable to create sysfs entries\n", __func__);

	return ret;
}

static int kcal_ctrl_remove(struct platform_device *pdev)
{
	struct kcal_lut_data *lut_data = platform_get_drvdata(pdev);

>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
	device_remove_file(&pdev->dev, &dev_attr_kcal);
	device_remove_file(&pdev->dev, &dev_attr_kcal_min);
	device_remove_file(&pdev->dev, &dev_attr_kcal_enable);
	device_remove_file(&pdev->dev, &dev_attr_kcal_invert);
	device_remove_file(&pdev->dev, &dev_attr_kcal_sat);
	device_remove_file(&pdev->dev, &dev_attr_kcal_hue);
	device_remove_file(&pdev->dev, &dev_attr_kcal_val);
	device_remove_file(&pdev->dev, &dev_attr_kcal_cont);

<<<<<<< HEAD
=======
	kfree(lut_data);

>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
	return 0;
}

static struct platform_driver kcal_ctrl_driver = {
	.probe = kcal_ctrl_probe,
	.remove = kcal_ctrl_remove,
	.driver = {
		.name = "kcal_ctrl",
	},
};

static struct platform_device kcal_ctrl_device = {
	.name = "kcal_ctrl",
};

static int __init kcal_ctrl_init(void)
{
	if (platform_driver_register(&kcal_ctrl_driver))
		return -ENODEV;

	if (platform_device_register(&kcal_ctrl_device))
		return -ENODEV;

	pr_info("%s: registered\n", __func__);

	return 0;
}

static void __exit kcal_ctrl_exit(void)
{
	platform_device_unregister(&kcal_ctrl_device);
	platform_driver_unregister(&kcal_ctrl_driver);
}

<<<<<<< HEAD
module_init(kcal_ctrl_init);
module_exit(kcal_ctrl_exit);
=======
late_initcall(kcal_ctrl_init);
module_exit(kcal_ctrl_exit);

<<<<<<< HEAD
MODULE_DESCRIPTION("LCD KCAL Driver");
>>>>>>> 32793eb... msm: mdss: Add KCAL support for post processing control [v2]
=======
MODULE_DESCRIPTION("MDSS-MDP5 KCAL Driver");
>>>>>>> 343fb15... msm: mdss: Keep KCAL within its own source file
