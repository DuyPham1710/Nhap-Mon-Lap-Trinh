strlen(S) (cho biet chuoi co bao nhieu ky tu)

strcpy(S,"ABCD") = gan (copy toan bo chuoi)

strupr(S) (doi sang in hoa)

strlwr(S) (doi sang chu thuong)

strrev(S) (dao nguoc chuoi)

strcat    (noi chuoi)
VD:
char S1[100] = "Nhap mon";
char S1[] = "Lap Trinh";
strcat(S1, " ");
strcat(S1, S2);

strcmp(S1,S2)  (so sanh co phan biet hoa thuong)
VD:
char S1[] = "Nhap Mon Lap Trinh";
char S2[] = "Nhap Mon Nganh CNTT";
int sosanh = strcmp(S1,S2);
if(sosanh>0)
	cout<<"S1>S2";
else
	if(sosanh<0)
		cout<<"S1<S2"; // ket qua
	else
		cout<<"S1=S2";


stricmp(S1,S2)  (so sanh khong phan biet hoa thuong)

strchr(S,ch)  (tim kiem ky tu co trong mang)

strstr(S,ch) (tim kiem chuoi co trong mang)

atoi => doi chuoi sang kieu int
atol => doi chuoi sang kieu long
atof => doi chuoi sang kieu float
itoa => doi kieu int sang chuoi
ltoa => doi kieu long sang chuoi
ultoa => doi kieu unsign long sang chuoi
strncpy => copy n ki tu dau tien
strncat => noi n ky tu dau tien

