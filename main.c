#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int data[] = {
	0x39CB44B8, 0x23754F67, 0x5F017211, 0x3EBB24DA, 
	0x351707C6, 0x63F9774B, 0x17827288, 0x0FE74821, 
	0x5B5F670F, 0x48315AE8, 0x785B7769, 0x2B7A1547, 
	0x38D11292, 0x42A11B32, 0x35332244, 0x77437B60, 
	0x1EAB3B10, 0x53810000, 0x1D0212AE, 0x6F0377A8, 
	0x43C03092, 0x2D3C0A8E, 0x62950CBF, 0x30F06FFA, 
	0x34F710E0, 0x28F417FB, 0x350D2F95, 0x5A361D5A, 
	0x15CC060B, 0x0AFD13CC, 0x28603BCF, 0x3371066B, 
	0x30CD14E4, 0x175D3A67, 0x6DD66A13, 0x2D3409F9, 
	0x581E7B82, 0x76526B99, 0x5C8D5188, 0x2C857971, 
	0x15F51FC0, 0x68CC0D11, 0x49F55E5C, 0x275E4364, 
	0x2D1E0DBC, 0x4CEE7CE3, 0x32555840, 0x112E2E08, 
	0x6978065A, 0x72921406, 0x314578E7, 0x175621B7, 
	0x40771DBF, 0x3FC238D6, 0x4A31128A, 0x2DAD036E, 
	0x41A069D6, 0x25400192, 0x00DD4667, 0x6AFC1F4F, 
	0x571040CE, 0x62FE66DF, 0x41DB4B3E, 0x3582231F, 
	0x55F6079A, 0x1CA70644, 0x1B1643D2, 0x3F7228C9, 
	0x5F141070, 0x3E1474AB, 0x444B256E, 0x537050D9, 
	0x0F42094B, 0x2FD820E6, 0x778B2E5E, 0x71176D02, 
	0x7FEA7A69, 0x5BB54628, 0x19BA6C71, 0x39763A99, 
	0x178D54CD, 0x01246E88, 0x3313537E, 0x2B8E2D17, 
	0x2A3D10BE, 0x59D10582, 0x37A163DB, 0x30D6489A, 
	0x6A215C46, 0x0E1C7A76, 0x1FC760E7, 0x79B80C65, 
	0x27F459B4, 0x799A7326, 0x50BA1782, 0x2A116D5C, 
	0x63866E1B, 0x3F920E3C, 0x55023490, 0x55B56089, 
	0x2C391FD1, 0x2F8035C2, 0x64FD2B7A, 0x4CE8759A, 
	0x518504F0, 0x799501A8, 0x3F5B2CAD, 0x38E60160, 
	0x637641D8, 0x33352A42, 0x51A22C19, 0x085C5851, 
	0x032917AB, 0x2B770AC7, 0x30AC77B3, 0x2BEC1907, 
	0x035202D0, 0x0FA933D3, 0x61255DF3, 0x22AD06BF, 
	0x58B86971, 0x5FCA0DE5, 0x700D6456, 0x56A973DB, 
	0x5AB759FD, 0x330E0BE2, 0x5B3C0DDD, 0x495D3C60, 
	0x53BD59A6, 0x4C5E6D91, 0x49D9318D, 0x103D5079, 
	0x61CE42E3, 0x7ED5121D, 0x14E160ED, 0x212D4EF2, 
	0x270133F0, 0x62435A96, 0x1FA75E8B, 0x6F092FBE, 
	0x4A000D49, 0x57AE1C70, 0x004E2477, 0x561E7E72, 
	0x468C0033, 0x5DCC2402, 0x78507AC6, 0x58AF24C7, 
	0x0DF62D34, 0x358A4708, 0x3CFB1E11, 0x2B71451C, 
	0x77A75295, 0x56890721, 0x0FEF75F3, 0x120F24F1, 
	0x01990AE7, 0x339C4452, 0x27A15B8E, 0x0BA7276D, 
	0x60DC1B7B, 0x4F4B7F82, 0x67DB7007, 0x4F4A57D9, 
	0x621252E8, 0x20532CFC, 0x6A390306, 0x18800423, 
	0x19F3778A, 0x462316F0, 0x56AE0937, 0x43C2675C, 
	0x65CA45FD, 0x0D604FF2, 0x0BFD22CB, 0x3AFE643B, 
	0x3BF67FA6, 0x44623579, 0x184031F8, 0x32174F97, 
	0x4C6A092A, 0x5FB50261, 0x01650174, 0x33634AF1, 
	0x712D18F4, 0x6E997169, 0x5DAB7AFE, 0x7C2B2EE8, 
	0x6EDB75B4, 0x5F836FB6, 0x3C2A6DD6, 0x292D05C2, 
	0x052244DB, 0x149A5F4F, 0x5D486540, 0x331D15EA, 
	0x4F456920, 0x483A699F, 0x3B450F05, 0x3B207C6C, 
	0x749D70FE, 0x417461F6, 0x62B031F1, 0x2750577B, 
	0x29131533, 0x588C3808, 0x1AEF3456, 0x0F3C00EC, 
	0x7DA74742, 0x4B797A6C, 0x5EBB3287, 0x786558B8, 
	0x00ED4FF2, 0x6269691E, 0x24A2255F, 0x62C11F7E, 
	0x2F8A7DCD, 0x643B17FE, 0x778318B8, 0x253B60FE, 
	0x34BB63A3, 0x5B03214F, 0x5F1571F4, 0x1A316E9F, 
	0x7ACF2704, 0x28896838, 0x18614677, 0x1BF569EB, 
	0x0BA85EC9, 0x6ACA6B46, 0x1E43422A, 0x514D5F0E, 
	0x413E018C, 0x307626E9, 0x01ED1DFA, 0x49F46F5A, 
	0x461B642B, 0x7D7007F2, 0x13652657, 0x6B160BC5, 
	0x65E04849, 0x1F526E1C, 0x5A0251B6, 0x2BD73F69, 
	0x2DBF7ACD, 0x51E63E80, 0x5CF2670F, 0x21CD0A03, 
	0x5CFF0261, 0x33AE061E, 0x3BB6345F, 0x5D814A75, 
	0x257B5DF4, 0x0A5C2C5B, 0x16A45527, 0x16F23945
};

char intToChar(int c) {
	if (c < 10)
		return '0' + c;
	else
		return 'A' + c - 10;
}

int magic_cal(char* name);

int main() {
	
	char name[256];
	char password[25];
	char passcode[10];
	while (1) {
		puts("Input name:");
		gets(name);
		
		int check0 = 0x9E68;
		int check1 = 0x81C3A2;
		int magic = magic_cal(name);
		
		passcode[3] = 0xAC;
		passcode[4] =  magic        & 0xff;
		passcode[5] = (magic >>  8) & 0xff;
		passcode[6] = (magic >> 16) & 0xff;
		passcode[7] = (magic >> 24) & 0xff;
	
		passcode[0] = (passcode[6] ^ check1) & 0xff;
		passcode[1] = (passcode[7] ^ (check0 >> 8)) & 0xff;
		passcode[2] = (passcode[5] ^ check0) & 0xff;
		passcode[8] = (passcode[4] ^ (check1 >> 8)) & 0xff;
		passcode[9] = (passcode[5] ^ (check1 >> 16)) & 0xff;
		
		password[0] = intToChar((passcode[0] >> 4) & 0xf);
		password[1] = intToChar((passcode[0] >> 0) & 0xf);
		password[2] = intToChar((passcode[1] >> 4) & 0xf);
		password[3] = intToChar((passcode[1] >> 0) & 0xf);
		password[4]  = '-';
		password[5] = intToChar((passcode[2] >> 4) & 0xf);
		password[6] = intToChar((passcode[2] >> 0) & 0xf);
		password[7] = intToChar((passcode[3] >> 4) & 0xf);
		password[8] = intToChar((passcode[3] >> 0) & 0xf);
		password[9]  = '-';
		password[10] = intToChar((passcode[4] >> 4) & 0xf);
		password[11] = intToChar((passcode[4] >> 0) & 0xf);
		password[12] = intToChar((passcode[5] >> 4) & 0xf);
		password[13] = intToChar((passcode[5] >> 0) & 0xf);
		password[14]  = '-';
		password[15] = intToChar((passcode[6] >> 4) & 0xf);
		password[16] = intToChar((passcode[6] >> 0) & 0xf);
		password[17] = intToChar((passcode[7] >> 4) & 0xf);
		password[18] = intToChar((passcode[7] >> 0) & 0xf);
		password[19]  = '-';
		password[20] = intToChar((passcode[8] >> 4) & 0xf);
		password[21] = intToChar((passcode[8] >> 0) & 0xf);
		password[22] = intToChar((passcode[9] >> 4) & 0xf);
		password[23] = intToChar((passcode[9] >> 0) & 0xf);
		password[24]  = 0;
		printf("[%s]: %s\n", name, password);
	}
	return 0; 
}

int magic_cal(char* name) {
	int rcx;				//		
	int r13 = strlen(name);	//length
	int r8 = 0xffff;		//v22
	int flag = 1;
	int* r9 = 0;			//
	int* r10 = 0;
	int rbp = 0;			//result
	int rax = 0;
	
	int rbx = 0;			//i
	int r14 = 0;			//variable_19
	//int rsi = user_count * 0xf
	int rsi = 0xf;			//variable_13
	int r15 = 0;			//variable_7
	int rdi = r8 * 17;		//variable_9
	int r11;
	
block:
	//printf("0x%08X\n", rbp);
	//printf("rbx = %d\n", rbx);
	rcx = name[rbx];
	r8 = toupper(rcx);
	rax = rdi & 0xff;
	r11 = data[r8];
	r9 = data + rax;
	r11 += rbp;
	rax = rsi & 0xff;
	r10 = data + rax;
	
	//if (flag)				flag == 1
	rax = r8 + 0xd;
	rcx = rax & 0xff;
	rax = r8 + 0x2f;
	rbp = *(data + rcx);
	rcx = rax & 0xff;
	rax = r14 & 0xff;
	
	rbp = rbp ^ r11;
	rbp *= *(data + rcx);
	rdi += 9;
	rsi += 0xd;
	r14 += 0x13;
	r15 += 7;
	rbx++;
	rbp += *(data + rax);
	rbp += *r9;
	rbp += *r10;
	//printf("rbp = 0x%08X\n", rbp);
	if (rbx < r13) goto block;
	
	return rbp;
}
