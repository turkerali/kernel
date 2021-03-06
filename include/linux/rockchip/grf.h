#ifndef __MACH_ROCKCHIP_GRF_H
#define __MACH_ROCKCHIP_GRF_H

#define RK3188_GRF_GPIO0L_DIR           0x0000
#define RK3188_GRF_GPIO0H_DIR           0x0004
#define RK3188_GRF_GPIO1L_DIR           0x0008
#define RK3188_GRF_GPIO1H_DIR           0x000c
#define RK3188_GRF_GPIO2L_DIR           0x0010
#define RK3188_GRF_GPIO2H_DIR           0x0014
#define RK3188_GRF_GPIO3L_DIR           0x0018
#define RK3188_GRF_GPIO3H_DIR           0x001c
#define RK3188_GRF_GPIO0L_DO            0x0020
#define RK3188_GRF_GPIO0H_DO            0x0024
#define RK3188_GRF_GPIO1L_DO            0x0028
#define RK3188_GRF_GPIO1H_DO            0x002c
#define RK3188_GRF_GPIO2L_DO            0x0030
#define RK3188_GRF_GPIO2H_DO            0x0034
#define RK3188_GRF_GPIO3L_DO            0x0038
#define RK3188_GRF_GPIO3H_DO            0x003c
#define RK3188_GRF_GPIO0L_EN            0x0040
#define RK3188_GRF_GPIO0H_EN            0x0044
#define RK3188_GRF_GPIO1L_EN            0x0048
#define RK3188_GRF_GPIO1H_EN            0x004c
#define RK3188_GRF_GPIO2L_EN            0x0050
#define RK3188_GRF_GPIO2H_EN            0x0054
#define RK3188_GRF_GPIO3L_EN            0x0058
#define RK3188_GRF_GPIO3H_EN            0x005c

#define RK3188_GRF_GPIO0C_IOMUX         0x0068
#define RK3188_GRF_GPIO0D_IOMUX         0x006c
#define RK3188_GRF_GPIO1A_IOMUX         0x0070
#define RK3188_GRF_GPIO1B_IOMUX         0x0074
#define RK3188_GRF_GPIO1C_IOMUX         0x0078
#define RK3188_GRF_GPIO1D_IOMUX         0x007c
#define RK3188_GRF_GPIO2A_IOMUX         0x0080
#define RK3188_GRF_GPIO2B_IOMUX         0x0084
#define RK3188_GRF_GPIO2C_IOMUX         0x0088
#define RK3188_GRF_GPIO2D_IOMUX         0x008c
#define RK3188_GRF_GPIO3A_IOMUX         0x0090
#define RK3188_GRF_GPIO3B_IOMUX         0x0094
#define RK3188_GRF_GPIO3C_IOMUX         0x0098
#define RK3188_GRF_GPIO3D_IOMUX         0x009c
#define RK3188_GRF_SOC_CON0             0x00a0
#define RK3188_GRF_SOC_CON1             0x00a4
#define RK3188_GRF_SOC_CON2             0x00a8
#define RK3188_GRF_SOC_STATUS0          0x00ac
#define RK3188_GRF_DMAC1_CON0           0x00b0
#define RK3188_GRF_DMAC1_CON1           0x00b4
#define RK3188_GRF_DMAC1_CON2           0x00b8
#define RK3188_GRF_DMAC2_CON0           0x00bc
#define RK3188_GRF_DMAC2_CON1           0x00c0
#define RK3188_GRF_DMAC2_CON2           0x00c4
#define RK3188_GRF_DMAC2_CON3           0x00c8
#define RK3188_GRF_CPU_CON0             0x00cc
#define RK3188_GRF_CPU_CON1             0x00d0
#define RK3188_GRF_CPU_CON2             0x00d4
#define RK3188_GRF_CPU_CON3             0x00d8
#define RK3188_GRF_CPU_CON4             0x00dc
#define RK3188_GRF_CPU_CON5             0x00e0

#define RK3188_GRF_DDRC_CON0            0x00ec
#define RK3188_GRF_DDRC_STAT            0x00f0
#define RK3188_GRF_IO_CON0              0x00f4
#define RK3188_GRF_IO_CON1              0x00f8
#define RK3188_GRF_IO_CON2              0x00fc
#define RK3188_GRF_IO_CON3              0x0100
#define RK3188_GRF_IO_CON4              0x0104
#define RK3188_GRF_SOC_STATUS1          0x0108
#define RK3188_GRF_UOC0_CON0            0x010c
#define RK3188_GRF_UOC0_CON1            0x0110
#define RK3188_GRF_UOC0_CON2            0x0114
#define RK3188_GRF_UOC0_CON3            0x0118
#define RK3188_GRF_UOC1_CON0            0x011c
#define RK3188_GRF_UOC1_CON1            0x0120
#define RK3188_GRF_UOC1_CON2            0x0124
#define RK3188_GRF_UOC1_CON3            0x0128
#define RK3188_GRF_UOC2_CON0            0x012c
#define RK3188_GRF_UOC2_CON1            0x0130

#define RK3188_GRF_UOC3_CON0            0x0138
#define RK3188_GRF_UOC3_CON1            0x013c
#define RK3188_GRF_HSIC_STAT            0x0140
#define RK3188_GRF_OS_REG0              0x0144
#define RK3188_GRF_OS_REG1              0x0148
#define RK3188_GRF_OS_REG2              0x014c
#define RK3188_GRF_OS_REG3              0x0150
#define RK3188_GRF_OS_REG4              0x0154
#define RK3188_GRF_OS_REG5              0x0158
#define RK3188_GRF_OS_REG6              0x015c
#define RK3188_GRF_OS_REG7              0x0160
#define RK3188_GRF_GPIO0B_PULL          0x0164
#define RK3188_GRF_GPIO0C_PULL          0x0168
#define RK3188_GRF_GPIO0D_PULL          0x016c
#define RK3188_GRF_GPIO1A_PULL          0x0170
#define RK3188_GRF_GPIO1B_PULL          0x0174
#define RK3188_GRF_GPIO1C_PULL          0x0178
#define RK3188_GRF_GPIO1D_PULL          0x017c
#define RK3188_GRF_GPIO2A_PULL          0x0180
#define RK3188_GRF_GPIO2B_PULL          0x0184
#define RK3188_GRF_GPIO2C_PULL          0x0188
#define RK3188_GRF_GPIO2D_PULL          0x018c
#define RK3188_GRF_GPIO3A_PULL          0x0190
#define RK3188_GRF_GPIO3B_PULL          0x0194
#define RK3188_GRF_GPIO3C_PULL          0x0198
#define RK3188_GRF_GPIO3D_PULL          0x019c
#define RK3188_GRF_FLASH_DATA_PULL      0x01a0
#define RK3188_GRF_FLASH_CMD_PULL       0x01a4


#define RK3288_GRF_GPIO0_A_IOMUX	0x0084
#define RK3288_GRF_GPIO0_B_IOMUX	0x0088
#define RK3288_GRF_GPIO0_C_IOMUX	0x008c

#define RK3288_GRF_GPIO1D_IOMUX         0x000c
#define RK3288_GRF_GPIO2A_IOMUX         0x0010
#define RK3288_GRF_GPIO2B_IOMUX         0x0014
#define RK3288_GRF_GPIO2C_IOMUX         0x0018

#define RK3288_GRF_GPIO3A_IOMUX         0x0020
#define RK3288_GRF_GPIO3B_IOMUX         0x0024
#define RK3288_GRF_GPIO3C_IOMUX         0x0028
#define RK3288_GRF_GPIO3DL_IOMUX        0x002c
#define RK3288_GRF_GPIO3DH_IOMUX        0x0030
#define RK3288_GRF_GPIO4AL_IOMUX        0x0034
#define RK3288_GRF_GPIO4AH_IOMUX        0x0038
#define RK3288_GRF_GPIO4BL_IOMUX        0x003c

#define RK3288_GRF_GPIO4C_IOMUX         0x0044
#define RK3288_GRF_GPIO4D_IOMUX         0x0048

#define RK3288_GRF_GPIO5B_IOMUX         0x0050
#define RK3288_GRF_GPIO5C_IOMUX         0x0054

#define RK3288_GRF_GPIO6A_IOMUX         0x005c
#define RK3288_GRF_GPIO6B_IOMUX         0x0060
#define RK3288_GRF_GPIO6C_IOMUX         0x0064

#define RK3288_GRF_GPIO7A_IOMUX         0x006c
#define RK3288_GRF_GPIO7B_IOMUX         0x0070
#define RK3288_GRF_GPIO7CL_IOMUX        0x0074
#define RK3288_GRF_GPIO7CH_IOMUX        0x0078

#define RK3288_GRF_GPIO8A_IOMUX         0x0080
#define RK3288_GRF_GPIO8B_IOMUX         0x0084

#define RK3288_GRF_GPIO1H_SR            0x0104
#define RK3288_GRF_GPIO2L_SR            0x0108
#define RK3288_GRF_GPIO2H_SR            0x010c
#define RK3288_GRF_GPIO3L_SR            0x0110
#define RK3288_GRF_GPIO3H_SR            0x0114
#define RK3288_GRF_GPIO4L_SR            0x0118
#define RK3288_GRF_GPIO4H_SR            0x011c
#define RK3288_GRF_GPIO5L_SR            0x0120
#define RK3288_GRF_GPIO5H_SR            0x0124
#define RK3288_GRF_GPIO6L_SR            0x0128
#define RK3288_GRF_GPIO6H_SR            0x012c
#define RK3288_GRF_GPIO7L_SR            0x0130
#define RK3288_GRF_GPIO7H_SR            0x0134
#define RK3288_GRF_GPIO8L_SR            0x0138

#define RK3288_GRF_GPIO1D_P             0x014c
#define RK3288_GRF_GPIO2A_P             0x0150
#define RK3288_GRF_GPIO2B_P             0x0154
#define RK3288_GRF_GPIO2C_P             0x0158

#define RK3288_GRF_GPIO3A_P             0x0160
#define RK3288_GRF_GPIO3B_P             0x0164
#define RK3288_GRF_GPIO3C_P             0x0168
#define RK3288_GRF_GPIO3D_P             0x016c
#define RK3288_GRF_GPIO4A_P             0x0170
#define RK3288_GRF_GPIO4B_P             0x0174
#define RK3288_GRF_GPIO4C_P             0x0178
#define RK3288_GRF_GPIO4D_P             0x017c

#define RK3288_GRF_GPIO5B_P             0x0184
#define RK3288_GRF_GPIO5C_P             0x0188

#define RK3288_GRF_GPIO6A_P             0x0190
#define RK3288_GRF_GPIO6B_P             0x0194
#define RK3288_GRF_GPIO6C_P             0x0198

#define RK3288_GRF_GPIO7A_P             0x01a0
#define RK3288_GRF_GPIO7B_P             0x01a4
#define RK3288_GRF_GPIO7C_P             0x01a8

#define RK3288_GRF_GPIO8A_P             0x01b0
#define RK3288_GRF_GPIO8B_P             0x01b4

#define RK3288_GRF_GPIO1D_E             0x01cc
#define RK3288_GRF_GPIO2A_E             0x01d0
#define RK3288_GRF_GPIO2B_E             0x01d4
#define RK3288_GRF_GPIO2C_E             0x01d8

#define RK3288_GRF_GPIO3A_E             0x01e0
#define RK3288_GRF_GPIO3B_E             0x01e4
#define RK3288_GRF_GPIO3C_E             0x01e8
#define RK3288_GRF_GPIO3D_E             0x01ec
#define RK3288_GRF_GPIO4A_E             0x01f0
#define RK3288_GRF_GPIO4B_E             0x01f4
#define RK3288_GRF_GPIO4C_E             0x01f8
#define RK3288_GRF_GPIO4D_E             0x01fc

#define RK3288_GRF_GPIO5B_E             0x0204
#define RK3288_GRF_GPIO5C_E             0x0208

#define RK3288_GRF_GPIO6A_E             0x0210
#define RK3288_GRF_GPIO6B_E             0x0214
#define RK3288_GRF_GPIO6C_E             0x0218

#define RK3288_GRF_GPIO7A_E             0x0220
#define RK3288_GRF_GPIO7B_E             0x0224
#define RK3288_GRF_GPIO7C_E             0x0228

#define RK3288_GRF_GPIO8A_E             0x0230
#define RK3288_GRF_GPIO8B_E             0x0234

#define RK3288_GRF_GPIO_SMT             0x0240
#define RK3288_GRF_SOC_CON0             0x0244
#define RK3288_GRF_SOC_CON1             0x0248
#define RK3288_GRF_SOC_CON2             0x024c
#define RK3288_GRF_SOC_CON3             0x0250
#define RK3288_GRF_SOC_CON4             0x0254
#define RK3288_GRF_SOC_CON5             0x0258
#define RK3288_GRF_SOC_CON6             0x025c
#define RK3288_GRF_SOC_CON7             0x0260
#define RK3288_GRF_SOC_CON8             0x0264
#define RK3288_GRF_SOC_CON9             0x0268
#define RK3288_GRF_SOC_CON10            0x026c
#define RK3288_GRF_SOC_CON11            0x0270
#define RK3288_GRF_SOC_CON12            0x0274
#define RK3288_GRF_SOC_CON13            0x0278
#define RK3288_GRF_SOC_CON14            0x027c
#define RK3288_GRF_SOC_STATUS0          0x0280
#define RK3288_GRF_SOC_STATUS1          0x0284
#define RK3288_GRF_SOC_STATUS2          0x0288
#define RK3288_GRF_SOC_STATUS3          0x028c
#define RK3288_GRF_SOC_STATUS4          0x0290
#define RK3288_GRF_SOC_STATUS5          0x0294
#define RK3288_GRF_SOC_STATUS6          0x0298
#define RK3288_GRF_SOC_STATUS7          0x029c
#define RK3288_GRF_SOC_STATUS8          0x02a0
#define RK3288_GRF_SOC_STATUS9          0x02a4
#define RK3288_GRF_SOC_STATUS10         0x02a8
#define RK3288_GRF_SOC_STATUS11         0x02ac
#define RK3288_GRF_SOC_STATUS12         0x02b0
#define RK3288_GRF_SOC_STATUS13         0x02b4
#define RK3288_GRF_SOC_STATUS14         0x02b8
#define RK3288_GRF_SOC_STATUS15         0x02bc
#define RK3288_GRF_SOC_STATUS16         0x02c0
#define RK3288_GRF_SOC_STATUS17         0x02c4
#define RK3288_GRF_SOC_STATUS18         0x02c8
#define RK3288_GRF_SOC_STATUS19         0x02cc
#define RK3288_GRF_SOC_STATUS20         0x02d0
#define RK3288_GRF_SOC_STATUS21         0x02d4

#define RK3288_GRF_PERIDMAC_CON0        0x02e0
#define RK3288_GRF_PERIDMAC_CON1        0x02e4
#define RK3288_GRF_PERIDMAC_CON2        0x02e8
#define RK3288_GRF_PERIDMAC_CON3        0x02ec
#define RK3288_GRF_DDRC0_CON0           0x02f0
#define RK3288_GRF_DDRC1_CON0           0x02f4
#define RK3288_GRF_CPU_CON0             0x02f8
#define RK3288_GRF_CPU_CON1             0x02fc
#define RK3288_GRF_CPU_CON2             0x0300
#define RK3288_GRF_CPU_CON3             0x0304
#define RK3288_GRF_CPU_CON4             0x0308

#define RK3288_GRF_CPU_STATUS0          0x0318

#define RK3288_GRF_UOC0_CON0            0x0320
#define RK3288_GRF_UOC0_CON1            0x0324
#define RK3288_GRF_UOC0_CON2            0x0328
#define RK3288_GRF_UOC0_CON3            0x032c
#define RK3288_GRF_UOC0_CON4            0x0330
#define RK3288_GRF_UOC1_CON0            0x0334
#define RK3288_GRF_UOC1_CON1            0x0338
#define RK3288_GRF_UOC1_CON2            0x033c
#define RK3288_GRF_UOC1_CON3            0x0340
#define RK3288_GRF_UOC1_CON4            0x0344
#define RK3288_GRF_UOC2_CON0            0x0348
#define RK3288_GRF_UOC2_CON1            0x034c
#define RK3288_GRF_UOC2_CON2            0x0350
#define RK3288_GRF_UOC2_CON3            0x0354
#define RK3288_GRF_UOC3_CON0            0x0358
#define RK3288_GRF_UOC3_CON1            0x035c
#define RK3288_GRF_UOC4_CON0            0x0360
#define RK3288_GRF_UOC4_CON1            0x0364
#define RK3288_GRF_PVTM_CON0            0x0368
#define RK3288_GRF_PVTM_CON1            0x036c
#define RK3288_GRF_PVTM_CON2            0x0370
#define RK3288_GRF_PVTM_STATUS0         0x0374
#define RK3288_GRF_PVTM_STATUS1         0x0378
#define RK3288_GRF_PVTM_STATUS2         0x037c
#define RK3288_GRF_IO_VSEL              0x0380
#define RK3288_GRF_SARADC_TESTBIT       0x0384
#define RK3288_GRF_TSADC_TESTBIT_L      0x0388
#define RK3288_GRF_TSADC_TESTBIT_H      0x038c
#define RK3288_GRF_OS_REG0              0x0390
#define RK3288_GRF_OS_REG1              0x0394
#define RK3288_GRF_OS_REG2              0x0398
#define RK3288_GRF_OS_REG3              0x039c

#define RK3288_GRF_SOC_CON15            0x03a4
#define RK3288_GRF_SOC_CON16            0x03a8

#define RK3288_SGRF_SOC_CON0            0x0000
#define RK3288_SGRF_SOC_CON1            0x0004
#define RK3288_SGRF_SOC_CON2            0x0008
#define RK3288_SGRF_SOC_CON3            0x000c
#define RK3288_SGRF_SOC_CON4            0x0010
#define RK3288_SGRF_SOC_CON5            0x0014

#define RK3288_SGRF_BUSDMAC_CON0        0x0020
#define RK3288_SGRF_BUSDMAC_CON1        0x0024

#define RK3288_SGRF_CPU_CON0            0x0040
#define RK3288_SGRF_CPU_CON1            0x0044
#define RK3288_SGRF_CPU_CON2            0x0048

#define RK3288_SGRF_SOC_CON6            0x0050
#define RK3288_SGRF_SOC_CON7            0x0054
#define RK3288_SGRF_SOC_CON8            0x0058
#define RK3288_SGRF_SOC_CON9            0x005c
#define RK3288_SGRF_SOC_CON10           0x0060
#define RK3288_SGRF_SOC_CON11           0x0064
#define RK3288_SGRF_SOC_CON12           0x0068
#define RK3288_SGRF_SOC_CON13           0x006c
#define RK3288_SGRF_SOC_CON14           0x0070
#define RK3288_SGRF_SOC_CON15           0x0074
#define RK3288_SGRF_SOC_CON16           0x0078
#define RK3288_SGRF_SOC_CON17           0x007c
#define RK3288_SGRF_SOC_CON18           0x0080
#define RK3288_SGRF_SOC_CON19           0x0084
#define RK3288_SGRF_SOC_CON20           0x0088
#define RK3288_SGRF_SOC_CON21           0x008c

#define RK3288_SGRF_SOC_STATUS0         0x0100
#define RK3288_SGRF_SOC_STATUS1         0x0104

#define RK3288_SGRF_FAST_BOOT_ADDR      0x0120

#endif
