#ifndef LIB_OLED_FONT_DATA_H
#define LIB_OLED_FONT_DATA_H


static const char font_Dialog[] PROGMEM = {
	0x11, // Width: 17
	0x13, // Height: 19
	0x20, // First Char: 32
	0xE0, // Numbers of Chars: 224

	// Jump Table:
	0xFF, 0xFF, 0x00, 0x05,  // 32:65535
	0x00, 0x00, 0x08, 0x06,  // 33:0
	0x00, 0x08, 0x0D, 0x06,  // 34:8
	0x00, 0x15, 0x22, 0x0D,  // 35:21
	0x00, 0x37, 0x1A, 0x0A,  // 36:55
	0x00, 0x51, 0x29, 0x0F,  // 37:81
	0x00, 0x7A, 0x20, 0x0C,  // 38:122
	0x00, 0x9A, 0x04, 0x03,  // 39:154
	0x00, 0x9E, 0x0F, 0x06,  // 40:158
	0x00, 0xAD, 0x0E, 0x06,  // 41:173
	0x00, 0xBB, 0x17, 0x08,  // 42:187
	0x00, 0xD2, 0x20, 0x0D,  // 43:210
	0x00, 0xF2, 0x08, 0x05,  // 44:242
	0x00, 0xFA, 0x0E, 0x06,  // 45:250
	0x01, 0x08, 0x08, 0x05,  // 46:264
	0x01, 0x10, 0x0D, 0x05,  // 47:272
	0x01, 0x1D, 0x1A, 0x0A,  // 48:285
	0x01, 0x37, 0x1A, 0x0A,  // 49:311
	0x01, 0x51, 0x17, 0x0A,  // 50:337
	0x01, 0x68, 0x1A, 0x0A,  // 51:360
	0x01, 0x82, 0x1D, 0x0A,  // 52:386
	0x01, 0x9F, 0x1A, 0x0A,  // 53:415
	0x01, 0xB9, 0x1A, 0x0A,  // 54:441
	0x01, 0xD3, 0x19, 0x0A,  // 55:467
	0x01, 0xEC, 0x1A, 0x0A,  // 56:492
	0x02, 0x06, 0x1A, 0x0A,  // 57:518
	0x02, 0x20, 0x08, 0x05,  // 58:544
	0x02, 0x28, 0x08, 0x05,  // 59:552
	0x02, 0x30, 0x23, 0x0D,  // 60:560
	0x02, 0x53, 0x23, 0x0D,  // 61:595
	0x02, 0x76, 0x23, 0x0D,  // 62:630
	0x02, 0x99, 0x13, 0x09,  // 63:665
	0x02, 0xAC, 0x2C, 0x10,  // 64:684
	0x02, 0xD8, 0x20, 0x0B,  // 65:728
	0x02, 0xF8, 0x1D, 0x0B,  // 66:760
	0x03, 0x15, 0x1D, 0x0B,  // 67:789
	0x03, 0x32, 0x20, 0x0C,  // 68:818
	0x03, 0x52, 0x1A, 0x0A,  // 69:850
	0x03, 0x6C, 0x16, 0x09,  // 70:876
	0x03, 0x82, 0x20, 0x0C,  // 71:898
	0x03, 0xA2, 0x20, 0x0C,  // 72:930
	0x03, 0xC2, 0x08, 0x05,  // 73:962
	0x03, 0xCA, 0x09, 0x05,  // 74:970
	0x03, 0xD3, 0x1A, 0x0A,  // 75:979
	0x03, 0xED, 0x17, 0x09,  // 76:1005
	0x04, 0x04, 0x23, 0x0D,  // 77:1028
	0x04, 0x27, 0x20, 0x0C,  // 78:1063
	0x04, 0x47, 0x23, 0x0D,  // 79:1095
	0x04, 0x6A, 0x19, 0x0A,  // 80:1130
	0x04, 0x83, 0x23, 0x0D,  // 81:1155
	0x04, 0xA6, 0x1D, 0x0B,  // 82:1190
	0x04, 0xC3, 0x1A, 0x0A,  // 83:1219
	0x04, 0xDD, 0x19, 0x09,  // 84:1245
	0x04, 0xF6, 0x20, 0x0C,  // 85:1270
	0x05, 0x16, 0x1F, 0x0B,  // 86:1302
	0x05, 0x35, 0x2E, 0x11,  // 87:1333
	0x05, 0x63, 0x1D, 0x0B,  // 88:1379
	0x05, 0x80, 0x19, 0x09,  // 89:1408
	0x05, 0x99, 0x20, 0x0C,  // 90:1433
	0x05, 0xB9, 0x0C, 0x06,  // 91:1465
	0x05, 0xC5, 0x0E, 0x05,  // 92:1477
	0x05, 0xD3, 0x0F, 0x06,  // 93:1491
	0x05, 0xE2, 0x1F, 0x0D,  // 94:1506
	0x06, 0x01, 0x18, 0x08,  // 95:1537
	0x06, 0x19, 0x0D, 0x08,  // 96:1561
	0x06, 0x26, 0x17, 0x09,  // 97:1574
	0x06, 0x3D, 0x1A, 0x0A,  // 98:1597
	0x06, 0x57, 0x17, 0x09,  // 99:1623
	0x06, 0x6E, 0x1A, 0x0A,  // 100:1646
	0x06, 0x88, 0x17, 0x09,  // 101:1672
	0x06, 0x9F, 0x10, 0x06,  // 102:1695
	0x06, 0xAF, 0x1A, 0x0A,  // 103:1711
	0x06, 0xC9, 0x1A, 0x0A,  // 104:1737
	0x06, 0xE3, 0x05, 0x03,  // 105:1763
	0x06, 0xE8, 0x06, 0x03,  // 106:1768
	0x06, 0xEE, 0x17, 0x09,  // 107:1774
	0x07, 0x05, 0x05, 0x03,  // 108:1797
	0x07, 0x0A, 0x29, 0x0F,  // 109:1802
	0x07, 0x33, 0x1A, 0x0A,  // 110:1843
	0x07, 0x4D, 0x1A, 0x0A,  // 111:1869
	0x07, 0x67, 0x1A, 0x0A,  // 112:1895
	0x07, 0x81, 0x1B, 0x0A,  // 113:1921
	0x07, 0x9C, 0x10, 0x07,  // 114:1948
	0x07, 0xAC, 0x17, 0x09,  // 115:1964
	0x07, 0xC3, 0x0E, 0x06,  // 116:1987
	0x07, 0xD1, 0x1A, 0x0A,  // 117:2001
	0x07, 0xEB, 0x19, 0x09,  // 118:2027
	0x08, 0x04, 0x25, 0x0D,  // 119:2052
	0x08, 0x29, 0x1A, 0x0A,  // 120:2089
	0x08, 0x43, 0x19, 0x09,  // 121:2115
	0x08, 0x5C, 0x17, 0x09,  // 122:2140
	0x08, 0x73, 0x15, 0x0A,  // 123:2163
	0x08, 0x88, 0x09, 0x05,  // 124:2184
	0x08, 0x91, 0x14, 0x0A,  // 125:2193
	0x08, 0xA5, 0x23, 0x0D,  // 126:2213
	0x08, 0xC8, 0x1B, 0x0A,  // 127:2248
	0x08, 0xE3, 0x1B, 0x0A,  // 128:2275
	0x08, 0xFE, 0x1B, 0x0A,  // 129:2302
	0x09, 0x19, 0x1B, 0x0A,  // 130:2329
	0x09, 0x34, 0x1B, 0x0A,  // 131:2356
	0x09, 0x4F, 0x1B, 0x0A,  // 132:2383
	0x09, 0x6A, 0x1B, 0x0A,  // 133:2410
	0x09, 0x85, 0x1B, 0x0A,  // 134:2437
	0x09, 0xA0, 0x1B, 0x0A,  // 135:2464
	0x09, 0xBB, 0x1B, 0x0A,  // 136:2491
	0x09, 0xD6, 0x1B, 0x0A,  // 137:2518
	0x09, 0xF1, 0x1B, 0x0A,  // 138:2545
	0x0A, 0x0C, 0x1B, 0x0A,  // 139:2572
	0x0A, 0x27, 0x1B, 0x0A,  // 140:2599
	0x0A, 0x42, 0x1B, 0x0A,  // 141:2626
	0x0A, 0x5D, 0x1B, 0x0A,  // 142:2653
	0x0A, 0x78, 0x1B, 0x0A,  // 143:2680
	0x0A, 0x93, 0x1B, 0x0A,  // 144:2707
	0x0A, 0xAE, 0x1B, 0x0A,  // 145:2734
	0x0A, 0xC9, 0x1B, 0x0A,  // 146:2761
	0x0A, 0xE4, 0x1B, 0x0A,  // 147:2788
	0x0A, 0xFF, 0x1B, 0x0A,  // 148:2815
	0x0B, 0x1A, 0x1B, 0x0A,  // 149:2842
	0x0B, 0x35, 0x1B, 0x0A,  // 150:2869
	0x0B, 0x50, 0x1B, 0x0A,  // 151:2896
	0x0B, 0x6B, 0x1B, 0x0A,  // 152:2923
	0x0B, 0x86, 0x1B, 0x0A,  // 153:2950
	0x0B, 0xA1, 0x1B, 0x0A,  // 154:2977
	0x0B, 0xBC, 0x1B, 0x0A,  // 155:3004
	0x0B, 0xD7, 0x1B, 0x0A,  // 156:3031
	0x0B, 0xF2, 0x1B, 0x0A,  // 157:3058
	0x0C, 0x0D, 0x1B, 0x0A,  // 158:3085
	0x0C, 0x28, 0x1B, 0x0A,  // 159:3112
	0xFF, 0xFF, 0x00, 0x05,  // 160:65535
	0x0C, 0x43, 0x0C, 0x06,  // 161:3139
	0x0C, 0x4F, 0x17, 0x0A,  // 162:3151
	0x0C, 0x66, 0x17, 0x0A,  // 163:3174
	0x0C, 0x7D, 0x1D, 0x0A,  // 164:3197
	0x0C, 0x9A, 0x19, 0x0A,  // 165:3226
	0x0C, 0xB3, 0x09, 0x05,  // 166:3251
	0x0C, 0xBC, 0x17, 0x08,  // 167:3260
	0x0C, 0xD3, 0x10, 0x08,  // 168:3283
	0x0C, 0xE3, 0x29, 0x10,  // 169:3299
	0x0D, 0x0C, 0x14, 0x08,  // 170:3340
	0x0D, 0x20, 0x1A, 0x0A,  // 171:3360
	0x0D, 0x3A, 0x23, 0x0D,  // 172:3386
	0x0D, 0x5D, 0x0E, 0x06,  // 173:3421
	0x0D, 0x6B, 0x29, 0x10,  // 174:3435
	0x0D, 0x94, 0x13, 0x08,  // 175:3476
	0x0D, 0xA7, 0x13, 0x08,  // 176:3495
	0x0D, 0xBA, 0x20, 0x0D,  // 177:3514
	0x0D, 0xDA, 0x11, 0x06,  // 178:3546
	0x0D, 0xEB, 0x11, 0x06,  // 179:3563
	0x0D, 0xFC, 0x13, 0x08,  // 180:3580
	0x0E, 0x0F, 0x1D, 0x0A,  // 181:3599
	0x0E, 0x2C, 0x18, 0x0A,  // 182:3628
	0x0E, 0x44, 0x08, 0x05,  // 183:3652
	0x0E, 0x4C, 0x0F, 0x08,  // 184:3660
	0x0E, 0x5B, 0x11, 0x06,  // 185:3675
	0x0E, 0x6C, 0x14, 0x08,  // 186:3692
	0x0E, 0x80, 0x1D, 0x0A,  // 187:3712
	0x0E, 0x9D, 0x29, 0x10,  // 188:3741
	0x0E, 0xC6, 0x2C, 0x10,  // 189:3782
	0x0E, 0xF2, 0x29, 0x10,  // 190:3826
	0x0F, 0x1B, 0x18, 0x09,  // 191:3867
	0x0F, 0x33, 0x20, 0x0B,  // 192:3891
	0x0F, 0x53, 0x20, 0x0B,  // 193:3923
	0x0F, 0x73, 0x20, 0x0B,  // 194:3955
	0x0F, 0x93, 0x20, 0x0B,  // 195:3987
	0x0F, 0xB3, 0x20, 0x0B,  // 196:4019
	0x0F, 0xD3, 0x20, 0x0B,  // 197:4051
	0x0F, 0xF3, 0x2C, 0x10,  // 198:4083
	0x10, 0x1F, 0x1D, 0x0B,  // 199:4127
	0x10, 0x3C, 0x1A, 0x0A,  // 200:4156
	0x10, 0x56, 0x1A, 0x0A,  // 201:4182
	0x10, 0x70, 0x1A, 0x0A,  // 202:4208
	0x10, 0x8A, 0x1A, 0x0A,  // 203:4234
	0x10, 0xA4, 0x08, 0x05,  // 204:4260
	0x10, 0xAC, 0x0A, 0x05,  // 205:4268
	0x10, 0xB6, 0x0D, 0x05,  // 206:4278
	0x10, 0xC3, 0x0D, 0x05,  // 207:4291
	0x10, 0xD0, 0x23, 0x0D,  // 208:4304
	0x10, 0xF3, 0x20, 0x0C,  // 209:4339
	0x11, 0x13, 0x23, 0x0D,  // 210:4371
	0x11, 0x36, 0x23, 0x0D,  // 211:4406
	0x11, 0x59, 0x23, 0x0D,  // 212:4441
	0x11, 0x7C, 0x23, 0x0D,  // 213:4476
	0x11, 0x9F, 0x23, 0x0D,  // 214:4511
	0x11, 0xC2, 0x20, 0x0D,  // 215:4546
	0x11, 0xE2, 0x23, 0x0D,  // 216:4578
	0x12, 0x05, 0x20, 0x0C,  // 217:4613
	0x12, 0x25, 0x20, 0x0C,  // 218:4645
	0x12, 0x45, 0x20, 0x0C,  // 219:4677
	0x12, 0x65, 0x20, 0x0C,  // 220:4709
	0x12, 0x85, 0x19, 0x09,  // 221:4741
	0x12, 0x9E, 0x1A, 0x0A,  // 222:4766
	0x12, 0xB8, 0x1A, 0x0A,  // 223:4792
	0x12, 0xD2, 0x17, 0x09,  // 224:4818
	0x12, 0xE9, 0x17, 0x09,  // 225:4841
	0x13, 0x00, 0x17, 0x09,  // 226:4864
	0x13, 0x17, 0x17, 0x09,  // 227:4887
	0x13, 0x2E, 0x17, 0x09,  // 228:4910
	0x13, 0x45, 0x17, 0x09,  // 229:4933
	0x13, 0x5C, 0x2C, 0x10,  // 230:4956
	0x13, 0x88, 0x17, 0x09,  // 231:5000
	0x13, 0x9F, 0x17, 0x09,  // 232:5023
	0x13, 0xB6, 0x17, 0x09,  // 233:5046
	0x13, 0xCD, 0x17, 0x09,  // 234:5069
	0x13, 0xE4, 0x17, 0x09,  // 235:5092
	0x13, 0xFB, 0x07, 0x03,  // 236:5115
	0x14, 0x02, 0x07, 0x03,  // 237:5122
	0x14, 0x09, 0x07, 0x03,  // 238:5129
	0x14, 0x10, 0x05, 0x03,  // 239:5136
	0x14, 0x15, 0x1A, 0x0A,  // 240:5141
	0x14, 0x2F, 0x1A, 0x0A,  // 241:5167
	0x14, 0x49, 0x1A, 0x0A,  // 242:5193
	0x14, 0x63, 0x1A, 0x0A,  // 243:5219
	0x14, 0x7D, 0x1A, 0x0A,  // 244:5245
	0x14, 0x97, 0x1A, 0x0A,  // 245:5271
	0x14, 0xB1, 0x1A, 0x0A,  // 246:5297
	0x14, 0xCB, 0x23, 0x0D,  // 247:5323
	0x14, 0xEE, 0x1A, 0x0A,  // 248:5358
	0x15, 0x08, 0x1A, 0x0A,  // 249:5384
	0x15, 0x22, 0x1A, 0x0A,  // 250:5410
	0x15, 0x3C, 0x1A, 0x0A,  // 251:5436
	0x15, 0x56, 0x1A, 0x0A,  // 252:5462
	0x15, 0x70, 0x19, 0x09,  // 253:5488
	0x15, 0x89, 0x1A, 0x0A,  // 254:5513
	0x15, 0xA3, 0x19, 0x09,  // 255:5539

	// Font Data:
	0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x67,	// 33
	0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,	// 34
	0x00,0x00,0x00,0x00,0x08,0x00,0x80,0x08,0x00,0x80,0x78,0x00,0x80,0x1F,0x00,0xF0,0x09,0x00,0x90,0x48,0x00,0x80,0x7C,0x00,0xC0,0x0F,0x00,0xF0,0x08,0x00,0x80,0x08,0x00,0x80,	// 35
	0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x21,0x00,0x60,0x42,0x00,0x20,0x42,0x00,0xF8,0xFF,0x01,0x20,0x44,0x00,0x20,0x64,0x00,0x40,0x38,	// 36
	0x00,0x00,0x00,0xF0,0x00,0x00,0x08,0x01,0x00,0x08,0x01,0x00,0x08,0x61,0x00,0xF0,0x18,0x00,0x00,0x0C,0x00,0x00,0x03,0x00,0xC0,0x00,0x00,0x60,0x3C,0x00,0x18,0x42,0x00,0x00,0x42,0x00,0x00,0x42,0x00,0x00,0x3C,	// 37
	0x00,0x00,0x00,0x00,0x1E,0x00,0x70,0x21,0x00,0x98,0x40,0x00,0x08,0x41,0x00,0x08,0x42,0x00,0x08,0x44,0x00,0x10,0x48,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x4E,	// 38
	0x00,0x00,0x00,0x78,	// 39
	0x00,0x00,0x00,0x80,0x1F,0x00,0x70,0xE0,0x00,0x18,0x80,0x01,0x08,0x00,0x01,	// 40
	0x00,0x00,0x00,0x08,0x00,0x01,0x18,0x80,0x01,0x70,0xE0,0x00,0x80,0x1F,	// 41
	0x00,0x00,0x00,0x20,0x01,0x00,0x40,0x01,0x00,0xC0,0x00,0x00,0xF8,0x07,0x00,0xC0,0x00,0x00,0x40,0x01,0x00,0x20,0x01,	// 42
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0xC0,0x7F,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,	// 43
	0x00,0x00,0x00,0x00,0x00,0x01,0x00,0xE0,	// 44
	0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,	// 45
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,	// 46
	0x00,0xC0,0x00,0x00,0x78,0x00,0x00,0x07,0x00,0xE0,0x00,0x00,0x18,	// 47
	0x00,0x00,0x00,0xC0,0x0F,0x00,0x30,0x30,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x30,0x30,0x00,0xC0,0x0F,	// 48
	0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x40,0x00,0x18,0x40,0x00,0x08,0x40,0x00,0xF8,0x7F,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,	// 49
	0x00,0x00,0x00,0x30,0x60,0x00,0x18,0x50,0x00,0x08,0x48,0x00,0x08,0x44,0x00,0x08,0x42,0x00,0x10,0x41,0x00,0xE0,0x40,	// 50
	0x00,0x00,0x00,0x10,0x20,0x00,0x08,0x40,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x90,0x22,0x00,0xF0,0x1E,	// 51
	0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x0B,0x00,0x80,0x08,0x00,0x40,0x08,0x00,0x30,0x08,0x00,0x08,0x08,0x00,0xF8,0x7F,0x00,0x00,0x08,0x00,0x00,0x08,	// 52
	0x00,0x00,0x00,0x00,0x20,0x00,0xF8,0x41,0x00,0x88,0x40,0x00,0x88,0x40,0x00,0x88,0x40,0x00,0x88,0x40,0x00,0x08,0x21,0x00,0x00,0x1E,	// 53
	0x00,0x00,0x00,0xC0,0x1F,0x00,0x30,0x21,0x00,0x90,0x40,0x00,0x88,0x40,0x00,0x88,0x40,0x00,0x88,0x40,0x00,0x10,0x21,0x00,0x00,0x1E,	// 54
	0x00,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x40,0x00,0x08,0x30,0x00,0x08,0x0E,0x00,0x88,0x01,0x00,0x68,0x00,0x00,0x18,	// 55
	0x00,0x00,0x00,0xF0,0x1E,0x00,0x90,0x22,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x90,0x22,0x00,0xF0,0x1E,	// 56
	0x00,0x00,0x00,0xE0,0x01,0x00,0x10,0x22,0x00,0x08,0x44,0x00,0x08,0x44,0x00,0x08,0x44,0x00,0x08,0x24,0x00,0x30,0x32,0x00,0xC0,0x0F,	// 57
	0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x61,	// 58
	0x00,0x00,0x00,0x00,0x00,0x01,0x80,0xE1,	// 59
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x0A,0x00,0x00,0x0A,0x00,0x00,0x1B,0x00,0x00,0x11,0x00,0x00,0x11,0x00,0x80,0x20,0x00,0x80,0x20,0x00,0x80,0x20,0x00,0x40,0x40,	// 60
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x00,0x00,0x09,0x00,0x00,0x09,0x00,0x00,0x09,0x00,0x00,0x09,0x00,0x00,0x09,0x00,0x00,0x09,0x00,0x00,0x09,0x00,0x00,0x09,0x00,0x00,0x09,	// 61
	0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x00,0x80,0x20,0x00,0x80,0x20,0x00,0x80,0x20,0x00,0x00,0x11,0x00,0x00,0x11,0x00,0x00,0x1B,0x00,0x00,0x0A,0x00,0x00,0x0A,0x00,0x00,0x04,	// 62
	0x00,0x00,0x00,0x10,0x00,0x00,0x08,0x00,0x00,0x08,0x6E,0x00,0x08,0x03,0x00,0x88,0x01,0x00,0xF0,	// 63
	0x00,0x00,0x00,0x80,0x1F,0x00,0xC0,0x30,0x00,0x20,0x40,0x00,0x10,0x8F,0x00,0x98,0x90,0x00,0x48,0x20,0x01,0x48,0x20,0x01,0x48,0x20,0x01,0x48,0x20,0x01,0x88,0x10,0x01,0xD0,0xBF,0x01,0x30,0xA0,0x00,0x60,0x10,0x00,0x80,0x0F,	// 64
	0x00,0x40,0x00,0x00,0x30,0x00,0x00,0x0E,0x00,0x80,0x09,0x00,0x60,0x08,0x00,0x18,0x08,0x00,0x60,0x08,0x00,0x80,0x09,0x00,0x00,0x0E,0x00,0x00,0x30,0x00,0x00,0x40,	// 65
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x90,0x23,0x00,0xF0,0x1E,	// 66
	0x00,0x00,0x00,0xC0,0x0F,0x00,0x20,0x10,0x00,0x10,0x20,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x18,0x60,0x00,0x10,0x20,	// 67
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x18,0x60,0x00,0x10,0x20,0x00,0x20,0x10,0x00,0xC0,0x0F,	// 68
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,	// 69
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x08,0x01,0x00,0x08,0x01,0x00,0x08,0x01,0x00,0x08,0x01,0x00,0x08,0x01,0x00,0x08,	// 70
	0x00,0x00,0x00,0xC0,0x0F,0x00,0x20,0x10,0x00,0x10,0x20,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x42,0x00,0x08,0x42,0x00,0x18,0x42,0x00,0x30,0x3E,	// 71
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0xF8,0x7F,	// 72
	0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x7F,	// 73
	0x00,0x00,0x02,0x00,0x00,0x02,0xF8,0xFF,0x01,	// 74
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x00,0x01,0x00,0x00,0x03,0x00,0x80,0x04,0x00,0x40,0x08,0x00,0x20,0x10,0x00,0x10,0x20,0x00,0x08,0x40,	// 75
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,	// 76
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x18,0x00,0x00,0xE0,0x00,0x00,0x00,0x03,0x00,0x00,0x0C,0x00,0x00,0x10,0x00,0x00,0x0C,0x00,0x00,0x03,0x00,0xE0,0x00,0x00,0x18,0x00,0x00,0xF8,0x7F,	// 77
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x08,0x00,0x00,0x30,0x00,0x00,0x40,0x00,0x00,0x80,0x01,0x00,0x00,0x02,0x00,0x00,0x0C,0x00,0x00,0x30,0x00,0x00,0x40,0x00,0xF8,0x7F,	// 78
	0x00,0x00,0x00,0xC0,0x0F,0x00,0x20,0x10,0x00,0x10,0x20,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x10,0x20,0x00,0x20,0x10,0x00,0xC0,0x0F,	// 79
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x08,0x02,0x00,0x08,0x02,0x00,0x08,0x02,0x00,0x08,0x02,0x00,0x08,0x02,0x00,0x10,0x01,0x00,0xE0,	// 80
	0x00,0x00,0x00,0xC0,0x0F,0x00,0x20,0x10,0x00,0x10,0x20,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x10,0xA0,0x00,0x20,0x30,0x01,0xC0,0x0F,	// 81
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x08,0x02,0x00,0x08,0x02,0x00,0x08,0x02,0x00,0x08,0x02,0x00,0x08,0x02,0x00,0x10,0x07,0x00,0xE0,0x18,0x00,0x00,0x60,	// 82
	0x00,0x00,0x00,0xF0,0x30,0x00,0x10,0x61,0x00,0x08,0x41,0x00,0x08,0x43,0x00,0x08,0x42,0x00,0x18,0x42,0x00,0x10,0x26,0x00,0x00,0x3C,	// 83
	0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0xF8,0x7F,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,	// 84
	0x00,0x00,0x00,0xF8,0x1F,0x00,0x00,0x20,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0xF8,0x1F,	// 85
	0x18,0x00,0x00,0x60,0x00,0x00,0x80,0x01,0x00,0x00,0x0E,0x00,0x00,0x30,0x00,0x00,0x40,0x00,0x00,0x30,0x00,0x00,0x0E,0x00,0x80,0x01,0x00,0x60,0x00,0x00,0x18,	// 86
	0x00,0x00,0x00,0x18,0x00,0x00,0xE0,0x00,0x00,0x00,0x07,0x00,0x00,0x18,0x00,0x00,0x60,0x00,0x00,0x1E,0x00,0xE0,0x01,0x00,0x18,0x00,0x00,0xE0,0x01,0x00,0x00,0x1E,0x00,0x00,0x60,0x00,0x00,0x18,0x00,0x00,0x07,0x00,0xE0,0x00,0x00,0x18,	// 87
	0x00,0x00,0x00,0x08,0x40,0x00,0x18,0x20,0x00,0x60,0x18,0x00,0x80,0x04,0x00,0x00,0x03,0x00,0x80,0x04,0x00,0x60,0x18,0x00,0x18,0x20,0x00,0x08,0x40,	// 88
	0x08,0x00,0x00,0x10,0x00,0x00,0x60,0x00,0x00,0x80,0x00,0x00,0x00,0x7F,0x00,0x80,0x00,0x00,0x60,0x00,0x00,0x10,0x00,0x00,0x08,	// 89
	0x00,0x00,0x00,0x08,0x60,0x00,0x08,0x50,0x00,0x08,0x48,0x00,0x08,0x44,0x00,0x08,0x42,0x00,0x08,0x41,0x00,0x88,0x40,0x00,0x48,0x40,0x00,0x28,0x40,0x00,0x18,0x40,	// 90
	0x00,0x00,0x00,0xF8,0xFF,0x01,0x08,0x00,0x01,0x08,0x00,0x01,	// 91
	0x18,0x00,0x00,0xF0,0x00,0x00,0x00,0x07,0x00,0x00,0x38,0x00,0x00,0xC0,	// 92
	0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x01,0x08,0x00,0x01,0xF8,0xFF,0x01,	// 93
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0x00,0x10,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x10,0x00,0x00,0x20,0x00,0x00,0x40,	// 94
	0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,	// 95
	0x00,0x00,0x00,0x04,0x00,0x00,0x0C,0x00,0x00,0x18,0x00,0x00,0x10,	// 96
	0x00,0x00,0x00,0x00,0x3C,0x00,0x80,0x66,0x00,0x40,0x42,0x00,0x40,0x42,0x00,0x40,0x42,0x00,0xC0,0x22,0x00,0x80,0x7F,	// 97
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x80,0x20,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x80,0x20,0x00,0x00,0x1F,	// 98
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x20,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x80,0x20,	// 99
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x20,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x80,0x20,0x00,0xF8,0x7F,	// 100
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x24,0x00,0x40,0x44,0x00,0x40,0x44,0x00,0x40,0x44,0x00,0x80,0x44,0x00,0x00,0x27,	// 101
	0x00,0x00,0x00,0x40,0x00,0x00,0xF0,0x7F,0x00,0x48,0x00,0x00,0x48,0x00,0x00,0x08,	// 102
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x20,0x01,0x40,0x40,0x02,0x40,0x40,0x02,0x40,0x40,0x02,0x40,0x40,0x02,0x80,0x20,0x01,0xC0,0xFF,	// 103
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x80,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x80,0x00,0x00,0x00,0x7F,	// 104
	0x00,0x00,0x00,0xD8,0x7F,	// 105
	0x00,0x00,0x02,0xD8,0xFF,0x01,	// 106
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x0A,0x00,0x00,0x11,0x00,0x80,0x20,0x00,0x40,0x40,	// 107
	0x00,0x00,0x00,0xF8,0x7F,	// 108
	0x00,0x00,0x00,0xC0,0x7F,0x00,0x80,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0xC0,0x00,0x00,0x80,0x7F,0x00,0x80,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0xC0,0x00,0x00,0x80,0x7F,	// 109
	0x00,0x00,0x00,0xC0,0x7F,0x00,0x80,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x80,0x00,0x00,0x00,0x7F,	// 110
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x20,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x80,0x20,0x00,0x00,0x1F,	// 111
	0x00,0x00,0x00,0xC0,0xFF,0x03,0x80,0x20,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x80,0x20,0x00,0x00,0x1F,	// 112
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x20,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x80,0x20,0x00,0xC0,0xFF,0x03,	// 113
	0x00,0x00,0x00,0xC0,0x7F,0x00,0x80,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,	// 114
	0x00,0x00,0x00,0x80,0x23,0x00,0x40,0x46,0x00,0x40,0x44,0x00,0x40,0x44,0x00,0x40,0x44,0x00,0x40,0x48,0x00,0x80,0x38,	// 115
	0x40,0x00,0x00,0xF0,0x3F,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,	// 116
	0x00,0x00,0x00,0xC0,0x1F,0x00,0x00,0x20,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0xC0,0x7F,	// 117
	0xC0,0x00,0x00,0x00,0x03,0x00,0x00,0x0C,0x00,0x00,0x30,0x00,0x00,0x60,0x00,0x00,0x30,0x00,0x00,0x0C,0x00,0x00,0x03,0x00,0xC0,	// 118
	0xC0,0x00,0x00,0x00,0x07,0x00,0x00,0x18,0x00,0x00,0x60,0x00,0x00,0x1C,0x00,0x00,0x03,0x00,0xC0,0x00,0x00,0x00,0x03,0x00,0x00,0x1C,0x00,0x00,0x60,0x00,0x00,0x18,0x00,0x00,0x07,0x00,0xC0,	// 119
	0x00,0x00,0x00,0x40,0x40,0x00,0xC0,0x60,0x00,0x00,0x1B,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x1B,0x00,0xC0,0x60,0x00,0x40,0x40,	// 120
	0x40,0x00,0x00,0x80,0x01,0x02,0x00,0x0E,0x02,0x00,0x30,0x02,0x00,0xC0,0x01,0x00,0x70,0x00,0x00,0x0C,0x00,0x80,0x03,0x00,0x40,	// 121
	0x00,0x00,0x00,0x40,0x60,0x00,0x40,0x50,0x00,0x40,0x48,0x00,0x40,0x44,0x00,0x40,0x42,0x00,0x40,0x41,0x00,0xC0,0x40,	// 122
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0xF0,0xFB,0x01,0x08,0x00,0x02,0x08,0x00,0x02,	// 123
	0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xFF,0x07,	// 124
	0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x02,0x08,0x00,0x02,0xF0,0xFB,0x01,0x00,0x04,0x00,0x00,0x04,	// 125
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x02,	// 126
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 127
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 128
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 129
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 130
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 131
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 132
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 133
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 134
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 135
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 136
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 137
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 138
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 139
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 140
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 141
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 142
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 143
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 144
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 145
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 146
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 147
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 148
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 149
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 150
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 151
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 152
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 153
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 154
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 155
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 156
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 157
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 158
	0x00,0x00,0x00,0xF0,0xFF,0x03,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0x10,0x00,0x02,0xF0,0xFF,0x03,	// 159
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xFC,0x03,	// 161
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x20,0x00,0xC0,0x60,0x00,0x40,0x40,0x00,0xF0,0xFF,0x01,0x40,0x40,0x00,0x80,0x20,	// 162
	0x00,0x00,0x00,0x00,0x42,0x00,0x00,0x42,0x00,0xF0,0x7F,0x00,0x18,0x42,0x00,0x08,0x42,0x00,0x08,0x42,0x00,0x10,0x40,	// 163
	0x00,0x00,0x00,0x40,0x40,0x00,0x80,0x3F,0x00,0x80,0x31,0x00,0x80,0x20,0x00,0x80,0x20,0x00,0x80,0x20,0x00,0x80,0x31,0x00,0x80,0x3F,0x00,0x40,0x40,	// 164
	0x08,0x00,0x00,0x30,0x09,0x00,0x40,0x09,0x00,0x80,0x09,0x00,0x00,0x7E,0x00,0x80,0x09,0x00,0x40,0x09,0x00,0x30,0x09,0x00,0x08,	// 165
	0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF3,0x03,	// 166
	0x00,0x00,0x00,0x00,0x07,0x00,0xF0,0x0C,0x01,0xC8,0x18,0x01,0x88,0x10,0x01,0x88,0x31,0x01,0x08,0xF1,0x00,0x00,0x0E,	// 167
	0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,	// 168
	0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x07,0x00,0x60,0x18,0x00,0x10,0x20,0x00,0x90,0x27,0x00,0x68,0x58,0x00,0x28,0x50,0x00,0x28,0x50,0x00,0x28,0x50,0x00,0x10,0x20,0x00,0x10,0x20,0x00,0x60,0x18,0x00,0x80,0x07,	// 169
	0x00,0x00,0x00,0xC0,0x04,0x00,0x28,0x05,0x00,0x28,0x05,0x00,0x28,0x05,0x00,0xA8,0x04,0x00,0xF0,0x05,	// 170
	0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x0A,0x00,0x00,0x11,0x00,0x80,0x31,0x00,0x00,0x04,0x00,0x00,0x0A,0x00,0x00,0x11,0x00,0x80,0x31,	// 171
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x1F,	// 172
	0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,	// 173
	0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x07,0x00,0x60,0x18,0x00,0x10,0x20,0x00,0x10,0x20,0x00,0xE8,0x5F,0x00,0x28,0x41,0x00,0x28,0x41,0x00,0x28,0x47,0x00,0xD0,0x3C,0x00,0x10,0x30,0x00,0x60,0x18,0x00,0x80,0x07,	// 174
	0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,	// 175
	0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x88,0x00,0x00,0x88,0x00,0x00,0x88,0x00,0x00,0x70,	// 176
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x00,0x00,0x41,0x00,0x00,0x41,0x00,0x00,0x41,0x00,0xE0,0x4F,0x00,0x00,0x41,0x00,0x00,0x41,0x00,0x00,0x41,0x00,0x00,0x41,	// 177
	0x00,0x00,0x00,0x08,0x02,0x00,0x08,0x03,0x00,0x88,0x02,0x00,0x48,0x02,0x00,0x30,0x02,	// 178
	0x00,0x00,0x00,0x08,0x02,0x00,0x48,0x02,0x00,0x48,0x02,0x00,0x48,0x02,0x00,0xB0,0x01,	// 179
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x18,0x00,0x00,0x0C,0x00,0x00,0x04,	// 180
	0x00,0x00,0x00,0xC0,0xFF,0x03,0x00,0x20,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0xC0,0x7F,0x00,0x00,0x40,	// 181
	0x00,0x00,0x00,0xE0,0x00,0x00,0xF0,0x01,0x00,0xF8,0x03,0x00,0xF8,0x03,0x00,0xF8,0xFF,0x01,0x08,0x00,0x00,0xF8,0xFF,0x01,	// 182
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,	// 183
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x80,0x02,0x00,0x00,0x03,	// 184
	0x00,0x00,0x00,0x08,0x02,0x00,0x08,0x02,0x00,0xF8,0x03,0x00,0x00,0x02,0x00,0x00,0x02,	// 185
	0x00,0x00,0x00,0xF0,0x04,0x00,0x98,0x05,0x00,0x08,0x05,0x00,0x08,0x05,0x00,0x98,0x05,0x00,0xF0,0x04,	// 186
	0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x31,0x00,0x00,0x11,0x00,0x00,0x0A,0x00,0x00,0x04,0x00,0x80,0x31,0x00,0x00,0x11,0x00,0x00,0x0A,0x00,0x00,0x04,	// 187
	0x00,0x00,0x00,0x08,0x02,0x00,0x08,0x02,0x00,0xF8,0x43,0x00,0x00,0x62,0x00,0x00,0x1A,0x00,0x00,0x04,0x00,0x00,0x03,0x00,0x80,0x00,0x00,0x60,0x30,0x00,0x18,0x2C,0x00,0x08,0x22,0x00,0x00,0x7F,0x00,0x00,0x20,	// 188
	0x00,0x00,0x00,0x08,0x02,0x00,0x08,0x02,0x00,0xF8,0x43,0x00,0x00,0x62,0x00,0x00,0x1A,0x00,0x00,0x04,0x00,0x00,0x03,0x00,0x80,0x00,0x00,0x60,0x00,0x00,0x18,0x41,0x00,0x08,0x61,0x00,0x00,0x51,0x00,0x00,0x49,0x00,0x00,0x46,	// 189
	0x00,0x00,0x00,0x08,0x02,0x00,0x48,0x02,0x00,0x48,0x42,0x00,0x48,0x62,0x00,0xB0,0x19,0x00,0x00,0x04,0x00,0x00,0x03,0x00,0x80,0x00,0x00,0x60,0x30,0x00,0x18,0x2C,0x00,0x08,0x22,0x00,0x00,0x7F,0x00,0x00,0x20,	// 190
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x01,0x00,0x30,0x02,0x00,0x18,0x02,0xC0,0x0E,0x02,0x00,0x00,0x02,0x00,0x00,0x01,	// 191
	0x00,0x40,0x00,0x00,0x30,0x00,0x00,0x0E,0x00,0x81,0x09,0x00,0x63,0x08,0x00,0x1A,0x08,0x00,0x60,0x08,0x00,0x80,0x09,0x00,0x00,0x0E,0x00,0x00,0x30,0x00,0x00,0x40,	// 192
	0x00,0x40,0x00,0x00,0x30,0x00,0x00,0x0E,0x00,0x80,0x09,0x00,0x62,0x08,0x00,0x1B,0x08,0x00,0x61,0x08,0x00,0x80,0x09,0x00,0x00,0x0E,0x00,0x00,0x30,0x00,0x00,0x40,	// 193
	0x00,0x40,0x00,0x00,0x30,0x00,0x00,0x0E,0x00,0x82,0x09,0x00,0x63,0x08,0x00,0x19,0x08,0x00,0x63,0x08,0x00,0x82,0x09,0x00,0x00,0x0E,0x00,0x00,0x30,0x00,0x00,0x40,	// 194
	0x00,0x40,0x00,0x00,0x30,0x00,0x00,0x0E,0x00,0x83,0x09,0x00,0x61,0x08,0x00,0x1B,0x08,0x00,0x62,0x08,0x00,0x83,0x09,0x00,0x00,0x0E,0x00,0x00,0x30,0x00,0x00,0x40,	// 195
	0x00,0x40,0x00,0x00,0x30,0x00,0x00,0x0E,0x00,0x80,0x09,0x00,0x63,0x08,0x00,0x18,0x08,0x00,0x63,0x08,0x00,0x80,0x09,0x00,0x00,0x0E,0x00,0x00,0x30,0x00,0x00,0x40,	// 196
	0x00,0x60,0x00,0x00,0x1C,0x00,0x00,0x0B,0x00,0xE6,0x08,0x00,0x19,0x08,0x00,0x09,0x08,0x00,0x19,0x08,0x00,0xE6,0x08,0x00,0x00,0x0B,0x00,0x00,0x1C,0x00,0x00,0x60,	// 197
	0x00,0x40,0x00,0x00,0x38,0x00,0x00,0x0E,0x00,0xC0,0x09,0x00,0x30,0x08,0x00,0x08,0x08,0x00,0x08,0x08,0x00,0xF8,0x7F,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,	// 198
	0x00,0x00,0x00,0xC0,0x0F,0x00,0x20,0x10,0x00,0x10,0x20,0x00,0x08,0x40,0x02,0x08,0xC0,0x02,0x08,0x40,0x03,0x08,0x40,0x00,0x18,0x60,0x00,0x10,0x20,	// 199
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x08,0x41,0x00,0x09,0x41,0x00,0x0B,0x41,0x00,0x0A,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,	// 200
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x0A,0x41,0x00,0x0B,0x41,0x00,0x09,0x41,0x00,0x08,0x41,0x00,0x08,0x41,	// 201
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x08,0x41,0x00,0x0A,0x41,0x00,0x0B,0x41,0x00,0x09,0x41,0x00,0x0B,0x41,0x00,0x0A,0x41,0x00,0x08,0x41,	// 202
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x08,0x41,0x00,0x0B,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x0B,0x41,0x00,0x08,0x41,0x00,0x08,0x41,	// 203
	0x01,0x00,0x00,0x03,0x00,0x00,0xFA,0x7F,	// 204
	0x00,0x00,0x00,0x02,0x00,0x00,0xFB,0x7F,0x00,0x01,	// 205
	0x02,0x00,0x00,0x03,0x00,0x00,0xF9,0x7F,0x00,0x03,0x00,0x00,0x02,	// 206
	0x03,0x00,0x00,0x00,0x00,0x00,0xF8,0x7F,0x00,0x00,0x00,0x00,0x03,	// 207
	0x00,0x01,0x00,0x00,0x01,0x00,0xF8,0x7F,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x41,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x18,0x60,0x00,0x10,0x20,0x00,0x20,0x10,0x00,0xC0,0x0F,	// 208
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x08,0x00,0x00,0x30,0x00,0x00,0x43,0x00,0x00,0x81,0x01,0x00,0x02,0x02,0x00,0x03,0x0C,0x00,0x00,0x30,0x00,0x00,0x40,0x00,0xF8,0x7F,	// 209
	0x00,0x00,0x00,0xC0,0x0F,0x00,0x20,0x10,0x00,0x10,0x20,0x00,0x09,0x40,0x00,0x0B,0x40,0x00,0x0A,0x40,0x00,0x08,0x40,0x00,0x08,0x40,0x00,0x10,0x20,0x00,0x20,0x10,0x00,0xC0,0x0F,	// 210
	0x00,0x00,0x00,0xC0,0x0F,0x00,0x20,0x10,0x00,0x10,0x20,0x00,0x08,0x40,0x00,0x0A,0x40,0x00,0x0B,0x40,0x00,0x09,0x40,0x00,0x08,0x40,0x00,0x10,0x20,0x00,0x20,0x10,0x00,0xC0,0x0F,	// 211
	0x00,0x00,0x00,0xC0,0x0F,0x00,0x20,0x10,0x00,0x10,0x20,0x00,0x0A,0x40,0x00,0x0B,0x40,0x00,0x09,0x40,0x00,0x0B,0x40,0x00,0x0A,0x40,0x00,0x10,0x20,0x00,0x20,0x10,0x00,0xC0,0x0F,	// 212
	0x00,0x00,0x00,0xC0,0x0F,0x00,0x20,0x10,0x00,0x10,0x20,0x00,0x0B,0x40,0x00,0x09,0x40,0x00,0x0B,0x40,0x00,0x0A,0x40,0x00,0x0B,0x40,0x00,0x10,0x20,0x00,0x20,0x10,0x00,0xC0,0x0F,	// 213
	0x00,0x00,0x00,0xC0,0x0F,0x00,0x20,0x10,0x00,0x10,0x20,0x00,0x08,0x40,0x00,0x0B,0x40,0x00,0x08,0x40,0x00,0x0B,0x40,0x00,0x08,0x40,0x00,0x10,0x20,0x00,0x20,0x10,0x00,0xC0,0x0F,	// 214
	0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x00,0x40,0x10,0x00,0x80,0x08,0x00,0x00,0x05,0x00,0x00,0x02,0x00,0x00,0x05,0x00,0x80,0x08,0x00,0x40,0x10,0x00,0x20,0x20,	// 215
	0x00,0x00,0x00,0xC0,0x4F,0x00,0x20,0x30,0x00,0x10,0x30,0x00,0x08,0x48,0x00,0x08,0x44,0x00,0x08,0x43,0x00,0x88,0x40,0x00,0x48,0x40,0x00,0x30,0x20,0x00,0x30,0x10,0x00,0xC8,0x0F,	// 216
	0x00,0x00,0x00,0xF8,0x1F,0x00,0x00,0x20,0x00,0x00,0x40,0x00,0x01,0x40,0x00,0x03,0x40,0x00,0x02,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0xF8,0x1F,	// 217
	0x00,0x00,0x00,0xF8,0x1F,0x00,0x00,0x20,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x02,0x40,0x00,0x03,0x40,0x00,0x01,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0xF8,0x1F,	// 218
	0x00,0x00,0x00,0xF8,0x1F,0x00,0x00,0x20,0x00,0x00,0x40,0x00,0x02,0x40,0x00,0x01,0x40,0x00,0x01,0x40,0x00,0x02,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0xF8,0x1F,	// 219
	0x00,0x00,0x00,0xF8,0x1F,0x00,0x00,0x20,0x00,0x00,0x40,0x00,0x03,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x03,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0xF8,0x1F,	// 220
	0x08,0x00,0x00,0x10,0x00,0x00,0x60,0x00,0x00,0x80,0x00,0x00,0x02,0x7F,0x00,0x83,0x00,0x00,0x61,0x00,0x00,0x10,0x00,0x00,0x08,	// 221
	0x00,0x00,0x00,0xF8,0x7F,0x00,0x20,0x08,0x00,0x20,0x08,0x00,0x20,0x08,0x00,0x20,0x08,0x00,0x20,0x08,0x00,0x40,0x04,0x00,0x80,0x03,	// 222
	0x00,0x00,0x00,0xF0,0x7F,0x00,0x18,0x00,0x00,0x08,0x40,0x00,0x88,0x43,0x00,0x48,0x46,0x00,0x58,0x44,0x00,0x70,0x4C,0x00,0x00,0x38,	// 223
	0x00,0x00,0x00,0x00,0x3C,0x00,0x84,0x66,0x00,0x4C,0x42,0x00,0x58,0x42,0x00,0x50,0x42,0x00,0xC0,0x22,0x00,0x80,0x7F,	// 224
	0x00,0x00,0x00,0x00,0x3C,0x00,0x80,0x66,0x00,0x40,0x42,0x00,0x50,0x42,0x00,0x58,0x42,0x00,0xCC,0x22,0x00,0x84,0x7F,	// 225
	0x00,0x00,0x00,0x00,0x3C,0x00,0x90,0x66,0x00,0x48,0x42,0x00,0x44,0x42,0x00,0x48,0x42,0x00,0xD0,0x22,0x00,0x80,0x7F,	// 226
	0x00,0x00,0x00,0x00,0x3C,0x00,0x98,0x66,0x00,0x48,0x42,0x00,0x58,0x42,0x00,0x50,0x42,0x00,0xD8,0x22,0x00,0x80,0x7F,	// 227
	0x00,0x00,0x00,0x00,0x3C,0x00,0x80,0x66,0x00,0x58,0x42,0x00,0x40,0x42,0x00,0x40,0x42,0x00,0xD8,0x22,0x00,0x80,0x7F,	// 228
	0x00,0x00,0x00,0x00,0x3C,0x00,0x80,0x66,0x00,0x4C,0x42,0x00,0x52,0x42,0x00,0x52,0x42,0x00,0xCC,0x22,0x00,0x80,0x7F,	// 229
	0x00,0x00,0x00,0x00,0x3C,0x00,0x80,0x66,0x00,0x40,0x42,0x00,0x40,0x42,0x00,0x40,0x42,0x00,0xC0,0x22,0x00,0x80,0x1F,0x00,0xC0,0x24,0x00,0x40,0x44,0x00,0x40,0x44,0x00,0x40,0x44,0x00,0x40,0x44,0x00,0x80,0x44,0x00,0x00,0x27,	// 230
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x20,0x00,0x40,0x40,0x02,0x40,0xC0,0x02,0x40,0x40,0x03,0x40,0x40,0x00,0x80,0x20,	// 231
	0x00,0x00,0x00,0x00,0x1F,0x00,0x84,0x24,0x00,0x4C,0x44,0x00,0x58,0x44,0x00,0x50,0x44,0x00,0x80,0x44,0x00,0x00,0x27,	// 232
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x24,0x00,0x40,0x44,0x00,0x50,0x44,0x00,0x58,0x44,0x00,0x8C,0x44,0x00,0x04,0x27,	// 233
	0x00,0x00,0x00,0x00,0x1F,0x00,0x90,0x24,0x00,0x48,0x44,0x00,0x44,0x44,0x00,0x48,0x44,0x00,0x90,0x44,0x00,0x00,0x27,	// 234
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x24,0x00,0x58,0x44,0x00,0x40,0x44,0x00,0x40,0x44,0x00,0x98,0x44,0x00,0x00,0x27,	// 235
	0x0C,0x00,0x00,0xD8,0x7F,0x00,0x10,	// 236
	0x00,0x00,0x00,0xD0,0x7F,0x00,0x18,	// 237
	0x08,0x00,0x00,0xC4,0x7F,0x00,0x08,	// 238
	0x00,0x00,0x00,0xC0,0x7F,	// 239
	0x00,0x00,0x00,0x20,0x1F,0x00,0xA8,0x20,0x00,0x58,0x40,0x00,0x50,0x40,0x00,0x68,0x40,0x00,0x68,0x40,0x00,0xC0,0x20,0x00,0x80,0x1F,	// 240
	0x00,0x00,0x00,0xC0,0x7F,0x00,0x98,0x00,0x00,0x48,0x00,0x00,0x58,0x00,0x00,0x50,0x00,0x00,0x58,0x00,0x00,0x80,0x00,0x00,0x00,0x7F,	// 241
	0x00,0x00,0x00,0x00,0x1F,0x00,0x84,0x20,0x00,0x4C,0x40,0x00,0x58,0x40,0x00,0x50,0x40,0x00,0x40,0x40,0x00,0x80,0x20,0x00,0x00,0x1F,	// 242
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x20,0x00,0x40,0x40,0x00,0x50,0x40,0x00,0x58,0x40,0x00,0x4C,0x40,0x00,0x84,0x20,0x00,0x00,0x1F,	// 243
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x20,0x00,0x50,0x40,0x00,0x4C,0x40,0x00,0x4C,0x40,0x00,0x50,0x40,0x00,0x80,0x20,0x00,0x00,0x1F,	// 244
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x20,0x00,0x58,0x40,0x00,0x48,0x40,0x00,0x50,0x40,0x00,0x58,0x40,0x00,0x80,0x20,0x00,0x00,0x1F,	// 245
	0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x20,0x00,0x58,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x58,0x40,0x00,0x80,0x20,0x00,0x00,0x1F,	// 246
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x80,0x35,0x00,0x80,0x35,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x04,	// 247
	0x00,0x00,0x00,0x00,0x5F,0x00,0x80,0x20,0x00,0x40,0x50,0x00,0x40,0x48,0x00,0x40,0x46,0x00,0x40,0x41,0x00,0x80,0x20,0x00,0x40,0x1F,	// 248
	0x00,0x00,0x00,0xC0,0x1F,0x00,0x04,0x20,0x00,0x0C,0x40,0x00,0x18,0x40,0x00,0x10,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0xC0,0x7F,	// 249
	0x00,0x00,0x00,0xC0,0x1F,0x00,0x00,0x20,0x00,0x00,0x40,0x00,0x10,0x40,0x00,0x18,0x40,0x00,0x0C,0x40,0x00,0x04,0x20,0x00,0xC0,0x7F,	// 250
	0x00,0x00,0x00,0xC0,0x1F,0x00,0x00,0x20,0x00,0x10,0x40,0x00,0x0C,0x40,0x00,0x0C,0x40,0x00,0x10,0x40,0x00,0x00,0x20,0x00,0xC0,0x7F,	// 251
	0x00,0x00,0x00,0xC0,0x1F,0x00,0x00,0x20,0x00,0x18,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x18,0x40,0x00,0x00,0x20,0x00,0xC0,0x7F,	// 252
	0x40,0x00,0x00,0x80,0x01,0x02,0x00,0x0E,0x02,0x00,0x30,0x02,0x10,0xC0,0x01,0x18,0x70,0x00,0x0C,0x0C,0x00,0x84,0x03,0x00,0x40,	// 253
	0x00,0x00,0x00,0xF8,0xFF,0x03,0x80,0x20,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x40,0x40,0x00,0x80,0x20,0x00,0x00,0x1F,	// 254
	0x40,0x00,0x00,0x80,0x01,0x02,0x00,0x0E,0x02,0x18,0x30,0x02,0x00,0xC0,0x01,0x18,0x70,0x00,0x00,0x0C,0x00,0x80,0x03,0x00,0x40	// 255
};


#endif /*LIB_OLED_FONT_DATA_H*/