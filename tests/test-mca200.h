#ifndef _MCA200_H
#  define _MCA200_H

#  define POLIS_RSH( a, b ) (a) >> (b)

#define SOFT 0
#define MED 1
#define HARD 2
#define DOWN 0
#define UP 1
#define SPEED_10_KM 10
#define SPEED_20_KM 20
#define SPEED_30_KM 30
#define SPEED_40_KM 40
#define SPEED_50_KM 50
#define SPEED_60_KM 60
#define SPEED_70_KM 70
#define SPEED_80_KM 80
#define SPEED_90_KM 90
#define SPEED_100_KM 100
#define SPEED_110_KM 110
#define SPEED_120_KM 120
#define SPEED_130_KM 130
#define SPEED_140_KM 140
#define SPEED_150_KM 150
#define SPEED_160_KM 160
#define SPEED_170_KM 170
#define SPEED_180_KM 180
#define SPEED_190_KM 190
#define SPEED_200_KM 200
#define SPEED_210_KM 210
#define SPEED_220_KM 220
#define SPEED_230_KM 230
#define SPEED_240_KM 240
#define SPEED_250_KM 250
#define MINUS_9 -18
#define PLUS_9 18
#define INCR 9
#define COANG 9221311
#define K_SENS 7207207
#define TIME_3_Km 9384
#define HHVBAT 180
#define LHVBAT 170
#define HLVBAT 110
#define LLVBAT 100
#define BAT_TIME_OUT 10
#define TIME_RECOVERY 1250
#define HHHARD 210
#define HLHARD 205
#define HHMED 160
#define HLMED 155
#define LHMED 7
#define LLMED 6
#define LHHARD 5
#define LLHARD 4
#define K1 4
#define Ka 12
#define SPEED_STOP 7038
#define TIME_REF_A 28828829
#define TIME_REF_B 57657658
#define HPERIOD 6256
#define LPERIOD 5927
#define A 0
#define B 1
#define MAX_ACC_VALUE 23
#define MAX_OUT_TIME 10
#define MAX_OUT_ERR_NUM 3
#define MAX_ABN_NUM 3
#define MIN_TPAR 6000
#define MAX_MIN_TPAR_NUM 3
#define D_TIME_10_MS 312
#define D_TIME_20_MS 625
#define D_TIME_1_S 31250
#define D_TIME_4_S 125000
#define ACMF_1 34800
#define ACMF_2 34800
#define ACMF_3 34800
#define ACMF_4 34800
#define ACMF_5 34616
#define ACMF_6 34354
#define ACMF_7 34143
#define ACMF_8 34143
#define ACMF_9 34143
#define ACMF_10 34143
#define ACMF_11 38483
#define ACMF_12 38483
#define ACMF_13 38483
#define ACMF_14 38483
#define ACMF_15 38483
#define ACMF_16 38483
#define ACMF_17 38483
#define ACMF_18 38483
#define ACMF_19 38483
#define ACMF_20 38483
#define ACMF_21 38483
#define ACMF_22 38483
#define ACMF_23 38483
#define ACMF_24 38483
#define ACMF_25 38483
#define ACHF_1 35324
#define ACHF_2 35324
#define ACHF_3 35324
#define ACHF_4 35324
#define ACHF_5 35095
#define ACHF_6 34800
#define ACHF_7 34669
#define ACHF_8 34669
#define ACHF_9 34669
#define ACHF_10 34669
#define ACHF_11 38483
#define ACHF_12 38483
#define ACHF_13 38483
#define ACHF_14 38483
#define ACHF_15 38483
#define ACHF_16 38483
#define ACHF_17 38483
#define ACHF_18 38483
#define ACHF_19 38483
#define ACHF_20 38483
#define ACHF_21 38483
#define ACHF_22 38483
#define ACHF_23 38483
#define ACHF_24 38483
#define ACHF_25 38483
#define DELFHA 33
#define DELFMA 33
#define ACMR_1 34996
#define ACMR_2 34996
#define ACMR_3 34996
#define ACMR_4 34996
#define ACMR_5 34505
#define ACMR_6 34354
#define ACMR_7 34328
#define ACMR_8 34328
#define ACMR_9 34328
#define ACMR_10 34328
#define ACMR_11 38483
#define ACMR_12 38483
#define ACMR_13 38483
#define ACMR_14 38483
#define ACMR_15 38483
#define ACMR_16 38483
#define ACMR_17 38483
#define ACMR_18 38483
#define ACMR_19 38483
#define ACMR_20 38483
#define ACMR_21 38483
#define ACMR_22 38483
#define ACMR_23 38483
#define ACMR_24 38483
#define ACMR_25 38483
#define ACHR_1 35717
#define ACHR_2 35717
#define ACHR_3 35717
#define ACHR_4 35717
#define ACHR_5 35455
#define ACHR_6 35127
#define ACHR_7 34865
#define ACHR_8 34865
#define ACHR_9 34865
#define ACHR_10 34865
#define ACHR_11 38483
#define ACHR_12 38483
#define ACHR_13 38483
#define ACHR_14 38483
#define ACHR_15 38483
#define ACHR_16 38483
#define ACHR_17 38483
#define ACHR_18 38483
#define ACHR_19 38483
#define ACHR_20 38483
#define ACHR_21 38483
#define ACHR_22 38483
#define ACHR_23 38483
#define ACHR_24 38483
#define ACHR_25 38483
#define DELRHA 33
#define DELRMA 33
#define DEMF_1 30933
#define DEMF_2 30933
#define DEMF_3 30933
#define DEMF_4 30933
#define DEMF_5 30999
#define DEMF_6 31064
#define DEMF_7 31064
#define DEMF_8 31064
#define DEMF_9 31064
#define DEMF_10 31064
#define DEMF_11 31064
#define DEMF_12 31064
#define DEMF_13 31064
#define DEMF_14 31064
#define DEMF_15 31064
#define DEMF_16 31064
#define DEMF_17 31064
#define DEMF_18 31064
#define DEMF_19 31064
#define DEMF_20 31064
#define DEMF_21 31064
#define DEMF_22 31064
#define DEMF_23 31064
#define DEMF_24 31064
#define DEMF_25 31064
#define DEHF_1 30081
#define DEHF_2 30081
#define DEHF_3 30081
#define DEHF_4 30081
#define DEHF_5 30211
#define DEHF_6 30343
#define DEHF_7 30409
#define DEHF_8 30409
#define DEHF_9 30409
#define DEHF_10 30409
#define DEHF_11 30409
#define DEHF_12 30409
#define DEHF_13 30409
#define DEHF_14 30409
#define DEHF_15 30409
#define DEHF_16 30409
#define DEHF_17 30409
#define DEHF_18 30409
#define DEHF_19 30409
#define DEHF_20 30409
#define DEHF_21 30409
#define DEHF_22 30409
#define DEHF_23 30409
#define DEHF_24 30409
#define DEHF_25 30409
#define DELFHD 28
#define DELFMD 28
#define DEMR_1 30933
#define DEMR_2 30933
#define DEMR_3 30933
#define DEMR_4 30933
#define DEMR_5 30999
#define DEMR_6 31064
#define DEMR_7 31064
#define DEMR_8 31064
#define DEMR_9 31064
#define DEMR_10 31064
#define DEMR_11 31064
#define DEMR_12 31064
#define DEMR_13 31064
#define DEMR_14 31064
#define DEMR_15 31064
#define DEMR_16 31064
#define DEMR_17 31064
#define DEMR_18 31064
#define DEMR_19 31064
#define DEMR_20 31064
#define DEMR_21 31064
#define DEMR_22 31064
#define DEMR_23 31064
#define DEMR_24 31064
#define DEMR_25 31064
#define DEHR_1 30081
#define DEHR_2 30081
#define DEHR_3 30081
#define DEHR_4 30081
#define DEHR_5 30212
#define DEHR_6 30343
#define DEHR_7 30409
#define DEHR_8 30409
#define DEHR_9 30409
#define DEHR_10 30409
#define DEHR_11 30409
#define DEHR_12 30409
#define DEHR_13 30409
#define DEHR_14 30409
#define DEHR_15 30409
#define DEHR_16 30409
#define DEHR_17 30409
#define DEHR_18 30409
#define DEHR_19 30409
#define DEHR_20 30409
#define DEHR_21 30409
#define DEHR_22 30409
#define DEHR_23 30409
#define DEHR_24 30409
#define DEHR_25 30409
#define DELRHD 28
#define DELRMD 28
#define DDEMF_1 39322
#define DDEMF_2 39322
#define DDEMF_3 39322
#define DDEMF_4 35258
#define DDEMF_5 34931
#define DDEMF_6 34603
#define DDEMF_7 34406
#define DDEMF_8 34275
#define DDEMF_9 34144
#define DDEMF_10 34046
#define DDEMF_11 33980
#define DDEMF_12 33948
#define DDEMF_13 33915
#define DDEMF_14 33882
#define DDEMF_15 33849
#define DDEMF_16 33816
#define DDEMF_17 33784
#define DDEMF_18 33784
#define DDEMF_19 33784
#define DDEMF_20 33784
#define DDEMF_21 33784
#define DDEMF_22 33784
#define DDEMF_23 33784
#define DDEMF_24 33784
#define DDEMF_25 33784
#define DDEHF_1 37159
#define DDEHF_2 37159
#define DDEHF_3 37159
#define DDEHF_4 36897
#define DDEHF_5 36372
#define DDEHF_6 35783
#define DDEHF_7 35455
#define DDEHF_8 35193
#define DDEHF_9 34931
#define DDEHF_10 34734
#define DDEHF_11 34603
#define DDEHF_12 34537
#define DDEHF_13 34472
#define DDEHF_14 34439
#define DDEHF_15 34406
#define DDEHF_16 34374
#define DDEHF_17 34341
#define DDEHF_18 34308
#define DDEHF_19 34275
#define DDEHF_20 34275
#define DDEHF_21 34275
#define DDEHF_22 34275
#define DDEHF_23 34275
#define DDEHF_24 34275
#define DDEHF_25 34275
#define DDELFHD 21
#define DDELFMD 34
#define DDEMR_1 39322
#define DDEMR_2 39322
#define DDEMR_3 39322
#define DDEMR_4 35258
#define DDEMR_5 34931
#define DDEMR_6 34603
#define DDEMR_7 34406
#define DDEMR_8 34275
#define DDEMR_9 34144
#define DDEMR_10 34046
#define DDEMR_11 33980
#define DDEMR_12 33948
#define DDEMR_13 33915
#define DDEMR_14 33882
#define DDEMR_15 33849
#define DDEMR_16 33816
#define DDEMR_17 33784
#define DDEMR_18 33784
#define DDEMR_19 33784
#define DDEMR_20 33784
#define DDEMR_21 33784
#define DDEMR_22 33784
#define DDEMR_23 33784
#define DDEMR_24 33784
#define DDEMR_25 33784
#define DDEHR_1 37159
#define DDEHR_2 37159
#define DDEHR_3 37159
#define DDEHR_4 36897
#define DDEHR_5 36372
#define DDEHR_6 35783
#define DDEHR_7 35455
#define DDEHR_8 35193
#define DDEHR_9 34931
#define DDEHR_10 34734
#define DDEHR_11 34603
#define DDEHR_12 34537
#define DDEHR_13 34472
#define DDEHR_14 34439
#define DDEHR_15 34406
#define DDEHR_16 34374
#define DDEHR_17 34341
#define DDEHR_18 34308
#define DDEHR_19 34275
#define DDEHR_20 34275
#define DDEHR_21 34275
#define DDEHR_22 34275
#define DDEHR_23 34275
#define DDEHR_24 34275
#define DDEHR_25 34275
#define DDELRHD 21
#define DDELRMD 34
#define Kd 77
#define ZERO_ACC 127
#define GME_ACC 210
#define MAX_ACC 239
#define MIN_ACC 10
#define MAX_R_ACC 168
#define MIN_R_ACC 52
#define TIME_OUT 13
#define TIME_R_OUT 166
#define MAX_ABNORM_NUM 4
#define LB0 429
#define LB1 0
#define LB2 -429
#define LA0 32031
#define LA1 -15794
#define MB0 2130
#define MB1 0
#define MB2 -2130
#define MA0 18923
#define MA1 -13435
#define ACLOWM_1 176
#define ACLOWM_2 172
#define ACLOWM_3 170
#define ACLOWM_4 164
#define ACLOWM_5 159
#define ACLOWM_6 156
#define ACLOWM_7 154
#define ACLOWM_8 152
#define ACLOWM_9 151
#define ACLOWM_10 150
#define ACLOWM_11 150
#define ACLOWM_12 149
#define ACLOWM_13 148
#define ACLOWM_14 148
#define ACLOWM_15 148
#define ACLOWM_16 147
#define ACLOWM_17 147
#define ACLOWM_18 147
#define ACLOWM_19 147
#define ACLOWM_20 147
#define ACLOWM_21 147
#define ACLOWM_22 147
#define ACLOWM_23 147
#define ACLOWM_24 147
#define ACLOWM_25 147
#define ACLOWH_1 192
#define ACLOWH_2 188
#define ACLOWH_3 184
#define ACLOWH_4 180
#define ACLOWH_5 175
#define ACLOWH_6 172
#define ACLOWH_7 170
#define ACLOWH_8 168
#define ACLOWH_9 166
#define ACLOWH_10 164
#define ACLOWH_11 163
#define ACLOWH_12 161
#define ACLOWH_13 160
#define ACLOWH_14 159
#define ACLOWH_15 157
#define ACLOWH_16 157
#define ACLOWH_17 156
#define ACLOWH_18 156
#define ACLOWH_19 155
#define ACLOWH_20 155
#define ACLOWH_21 155
#define ACLOWH_22 155
#define ACLOWH_23 155
#define ACLOWH_24 155
#define ACLOWH_25 155
#define DELCOL_1 45
#define DELCOL_2 23
#define DELCOL_3 15
#define DELCOL_4 11
#define DELCOL_5 9
#define DELCOL_6 7
#define DELCOL_7 5
#define DELCOL_8 4
#define DELCOL_9 4
#define DELCOL_10 3
#define DELCOL_11 2
#define DELCOL_12 1
#define DELCOL_13 0
#define DELCOL_14 0
#define DELCOL_15 0
#define DELCOL_16 0
#define DELCOL_17 0
#define DELCOL_18 0
#define DELCOL_19 0
#define DELCOL_20 0
#define DELCOL_21 0
#define DELCOL_22 0
#define DELCOL_23 0
#define DELCOL_24 0
#define DELCOL_25 0
#define DELFHLO 34
#define DELFMLO 16
#define ACMEDM_1 160
#define ACMEDM_2 160
#define ACMEDM_3 160
#define ACMEDM_4 160
#define ACMEDM_5 160
#define ACMEDM_6 160
#define ACMEDM_7 160
#define ACMEDM_8 160
#define ACMEDM_9 160
#define ACMEDM_10 160
#define ACMEDM_11 160
#define ACMEDM_12 157
#define ACMEDM_13 155
#define ACMEDM_14 154
#define ACMEDM_15 151
#define ACMEDM_16 148
#define ACMEDM_17 148
#define ACMEDM_18 148
#define ACMEDM_19 148
#define ACMEDM_20 148
#define ACMEDM_21 148
#define ACMEDM_22 148
#define ACMEDM_23 148
#define ACMEDM_24 148
#define ACMEDM_25 148
#define ACMEDH_1 180
#define ACMEDH_2 180
#define ACMEDH_3 180
#define ACMEDH_4 180
#define ACMEDH_5 180
#define ACMEDH_6 180
#define ACMEDH_7 180
#define ACMEDH_8 180
#define ACMEDH_9 180
#define ACMEDH_10 180
#define ACMEDH_11 180
#define ACMEDH_12 179
#define ACMEDH_13 178
#define ACMEDH_14 175
#define ACMEDH_15 174
#define ACMEDH_16 172
#define ACMEDH_17 170
#define ACMEDH_18 170
#define ACMEDH_19 170
#define ACMEDH_20 170
#define ACMEDH_21 170
#define ACMEDH_22 170
#define ACMEDH_23 170
#define ACMEDH_24 170
#define ACMEDH_25 170
#define DELCOM_1 45
#define DELCOM_2 23
#define DELCOM_3 15
#define DELCOM_4 11
#define DELCOM_5 9
#define DELCOM_6 7
#define DELCOM_7 5
#define DELCOM_8 4
#define DELCOM_9 4
#define DELCOM_10 4
#define DELCOM_11 3
#define DELCOM_12 3
#define DELCOM_13 2
#define DELCOM_14 2
#define DELCOM_15 1
#define DELCOM_16 0
#define DELCOM_17 0
#define DELCOM_18 0
#define DELCOM_19 0
#define DELCOM_20 0
#define DELCOM_21 0
#define DELCOM_22 0
#define DELCOM_23 0
#define DELCOM_24 0
#define DELCOM_25 0
#define DELFHME 2
#define DELFMME 6
#define MAX_SPEED_VALUE 25700
#define T_Kt 90
#define Kz 5
#define T_Kz 7500
#define MIN_CORR_Kz 384
#define Ky 1
#define T_Ky 50000
#define MIN_CORR_Ky 128
#define MAX_CORR 2560
#define TIME_A_1 42
#define TIME_A_2 167
#define TIME_A_3 500
#define TIME_B_1 83
#define TIME_B_2 333
#define TIME_B_3 1000
#define ANMF_1 2040
#define ANMF_2 2040
#define ANMF_3 500
#define ANMF_4 260
#define ANMF_5 156
#define ANMF_6 100
#define ANMF_7 68
#define ANMF_8 52
#define ANMF_9 40
#define ANMF_10 30
#define ANMF_11 24
#define ANMF_12 22
#define ANMF_13 20
#define ANMF_14 18
#define ANMF_15 16
#define ANMF_16 14
#define ANMF_17 12
#define ANMF_18 12
#define ANMF_19 12
#define ANMF_20 12
#define ANMF_21 12
#define ANMF_22 12
#define ANMF_23 12
#define ANMF_24 12
#define ANMF_25 12
#define ANHF_1 2040
#define ANHF_2 2040
#define ANHF_3 900
#define ANHF_4 428
#define ANHF_5 276
#define ANHF_6 156
#define ANHF_7 108
#define ANHF_8 78
#define ANHF_9 56
#define ANHF_10 42
#define ANHF_11 36
#define ANHF_12 32
#define ANHF_13 28
#define ANHF_14 26
#define ANHF_15 24
#define ANHF_16 22
#define ANHF_17 20
#define ANHF_18 18
#define ANHF_19 16
#define ANHF_20 14
#define ANHF_21 12
#define ANHF_22 12
#define ANHF_23 12
#define ANHF_24 12
#define ANHF_25 12
#define DELFHAN 17
#define DELFMAN 30
#define ANMR_1 2040
#define ANMR_2 2040
#define ANMR_3 400
#define ANMR_4 200
#define ANMR_5 132
#define ANMR_6 88
#define ANMR_7 56
#define ANMR_8 42
#define ANMR_9 34
#define ANMR_10 28
#define ANMR_11 24
#define ANMR_12 22
#define ANMR_13 20
#define ANMR_14 18
#define ANMR_15 16
#define ANMR_16 14
#define ANMR_17 12
#define ANMR_18 12
#define ANMR_19 12
#define ANMR_20 12
#define ANMR_21 12
#define ANMR_22 12
#define ANMR_23 12
#define ANMR_24 12
#define ANMR_25 12
#define ANHR_1 2040
#define ANHR_2 2040
#define ANHR_3 800
#define ANHR_4 400
#define ANHR_5 200
#define ANHR_6 124
#define ANHR_7 88
#define ANHR_8 66
#define ANHR_9 52
#define ANHR_10 42
#define ANHR_11 36
#define ANHR_12 32
#define ANHR_13 28
#define ANHR_14 26
#define ANHR_15 24
#define ANHR_16 22
#define ANHR_17 20
#define ANHR_18 18
#define ANHR_19 16
#define ANHR_20 14
#define ANHR_21 12
#define ANHR_22 12
#define ANHR_23 12
#define ANHR_24 12
#define ANHR_25 12
#define DELRHAN 13
#define DELRMAN 25
#define MAX_INIT_TIME 65000
#define INIT_SPEED1 12850
#define INIT_SPEED2 7710
#define MIN_ANG_VALUE -36
#define MAX_ANG_VALUE 36
#define ANG_INCR 9
#define ANG_INCR_INIT 5
#define MAX_SPEED_VAL 63333
#define MAX_NUM_SPEED_VAL_OUT 3
#define Kv 153
#define VAMF_1 63755
#define VAMF_2 63755
#define VAMF_3 3932
#define VAMF_4 2621
#define VAMF_5 1802
#define VAMF_6 1310
#define VAMF_7 1049
#define VAMF_8 852
#define VAMF_9 688
#define VAMF_10 557
#define VAMF_11 459
#define VAMF_12 393
#define VAMF_13 328
#define VAMF_14 262
#define VAMF_15 197
#define VAMF_16 164
#define VAMF_17 164
#define VAMF_18 164
#define VAMF_19 164
#define VAMF_20 164
#define VAMF_21 164
#define VAMF_22 164
#define VAMF_23 164
#define VAMF_24 164
#define VAMF_25 164
#define VAHF_1 63755
#define VAHF_2 63755
#define VAHF_3 5898
#define VAHF_4 3932
#define VAHF_5 2785
#define VAHF_6 2130
#define VAHF_7 1638
#define VAHF_8 1343
#define VAHF_9 1114
#define VAHF_10 655
#define VAHF_11 557
#define VAHF_12 459
#define VAHF_13 393
#define VAHF_14 328
#define VAHF_15 295
#define VAHF_16 262
#define VAHF_17 229
#define VAHF_18 197
#define VAHF_19 164
#define VAHF_20 164
#define VAHF_21 164
#define VAHF_22 164
#define VAHF_23 164
#define VAHF_24 164
#define VAHF_25 164
#define DELFHVA 8
#define DELFMVA 24
#define VAMR_1 63755
#define VAMR_2 63755
#define VAMR_3 2785
#define VAMR_4 1901
#define VAMR_5 1376
#define VAMR_6 1114
#define VAMR_7 885
#define VAMR_8 688
#define VAMR_9 557
#define VAMR_10 459
#define VAMR_11 393
#define VAMR_12 328
#define VAMR_13 262
#define VAMR_14 229
#define VAMR_15 197
#define VAMR_16 164
#define VAMR_17 164
#define VAMR_18 164
#define VAMR_19 164
#define VAMR_20 164
#define VAMR_21 164
#define VAMR_22 164
#define VAMR_23 164
#define VAMR_24 164
#define VAMR_25 164
#define VAHR_1 63755
#define VAHR_2 63755
#define VAHR_3 4588
#define VAHR_4 2949
#define VAHR_5 2064
#define VAHR_6 1671
#define VAHR_7 1311
#define VAHR_8 1081
#define VAHR_9 918
#define VAHR_10 786
#define VAHR_11 688
#define VAHR_12 590
#define VAHR_13 524
#define VAHR_14 459
#define VAHR_15 393
#define VAHR_16 328
#define VAHR_17 295
#define VAHR_18 262
#define VAHR_19 229
#define VAHR_20 197
#define VAHR_21 164
#define VAHR_22 164
#define VAHR_23 164
#define VAHR_24 164
#define VAHR_25 164
#define DELRHVA 7
#define DELRMVA 22
#define TIME_START 100
#define TIME_STOP 200
#define TIME_45 9000
#define TIME_30 6000
#define TIME_15 3000
#define VBAT_10_V 100
#define VBAT_12_V 120
#define VBAT_13_V 130

#endif
