/* Generated from ../../../git/cloog/test/durbin_e_s.cloog by CLooG 0.14.0-135-g7671e98 gmp bits in 0.03s. */
S4(i = 1,j = 0,k = 0) ;
S7(i = 1,j = 0,k = 0) ;
S8(i = 1,j = 0,k = 3) ;
S2(i = 2,j = -7,k = 0) ;
S3(i = 2,j = -7,k = 1) ;
S6(i = 2,j = -7,k = 2) ;
S8(i = 2,j = 0,k = 3) ;
S5(i = 2,j = 1,k = 3) ;
S2(i = 3,j = -7,k = 0) ;
S3(i = 3,j = -7,k = 1) ;
S3(i = 3,j = -6,k = 1) ;
S6(i = 3,j = -6,k = 2) ;
S8(i = 3,j = 0,k = 3) ;
for (j=1;j<=2;j++) {
  S5(i = 3,k = 3) ;
}
for (i=4;i<=8;i++) {
  S2(j = -7,k = 0) ;
  S3(j = -7,k = 1) ;
  for (j=-6;j<=i-10;j++) {
    S3(k = 1) ;
  }
  S3(j = i-9,k = 1) ;
  S6(j = i-9,k = 2) ;
  S8(j = 0,k = 3) ;
  for (j=1;j<=i-1;j++) {
    S5(k = 3) ;
  }
}
S2(i = 9,j = -7,k = 0) ;
S3(i = 9,j = -7,k = 1) ;
for (j=-6;j<=-1;j++) {
  S3(i = 9,k = 1) ;
}
S3(i = 9,j = 0,k = 1) ;
S6(i = 9,j = 0,k = 2) ;
S8(i = 9,j = 0,k = 3) ;
for (j=1;j<=8;j++) {
  S5(i = 9,k = 3) ;
}
S2(i = 10,j = -7,k = 0) ;
S3(i = 10,j = -7,k = 1) ;
for (j=-6;j<=0;j++) {
  S3(i = 10,k = 1) ;
}
S3(i = 10,j = 1,k = 1) ;
S6(i = 10,j = 1,k = 2) ;
S5(i = 10,j = 1,k = 3) ;
S1(i = 10,j = 1,k = 4) ;
for (j=2;j<=9;j++) {
  S5(i = 10,k = 3) ;
  S1(i = 10,k = 4) ;
}
S1(i = 10,j = 10,k = 4) ;
