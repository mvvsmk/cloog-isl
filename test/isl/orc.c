/* Generated from ../../../git/cloog/test/orc.cloog by CLooG 0.14.0-135-g7671e98 gmp bits in 0.03s. */
S1(i = 0) ;
for (p2=0;p2<=22;p2++) {
  if (p2%2 == 0) {
    S2(i = 0,j = p2/2) ;
    S3(i = 0,j = p2/2) ;
  }
}
for (p1=2;p1<=6;p1++) {
  if ((p1+1)%3 == 0) {
    S4(i = (p1-2)/3) ;
  }
  if ((p1+2)%3 == 0) {
    S2(i = (p1-1)/3,j = 0) ;
    S3(i = (p1-1)/3,j = 0) ;
  }
  if (p1%3 == 0) {
    S1(i = p1/3) ;
  }
  for (p2=1;p2<=floord(-2*p1+68,3);p2++) {
    if ((p1+2)%3 == 0) {
      if (p2%2 == 0) {
        S2(i = (p1-1)/3,j = p2/2) ;
        S3(i = (p1-1)/3,j = p2/2) ;
      }
    }
  }
}
for (p2=0;p2<=18;p2++) {
  if (p2%2 == 0) {
    S2(i = 2,j = p2/2) ;
    S3(i = 2,j = p2/2) ;
  }
}
S4(i = 2) ;
S5(i = 0) ;
for (p2=0;p2<=9;p2++) {
  S6(i = 0,j = p2) ;
}
for (p1=2;p1<=42;p1++) {
  if ((p1+1)%3 == 0) {
    S7(i = (p1-2)/3) ;
  }
  if ((p1+2)%3 == 0) {
    S6(i = (p1-1)/3,j = 0) ;
  }
  if (p1%3 == 0) {
    S5(i = p1/3) ;
  }
  for (p2=1;p2<=9;p2++) {
    if ((p1+2)%3 == 0) {
      S6(i = (p1-1)/3,j = p2) ;
    }
  }
}
for (p2=0;p2<=9;p2++) {
  S6(i = 14,j = p2) ;
}
S7(i = 14) ;
