/* Generated from ../../../git/cloog/test/thomasset.cloog by CLooG 0.14.0-135-g7671e98 gmp bits in 0.12s. */
if (n >= 1) {
  for (c1=0;c1<=floord(n-5,3);c1++) {
    for (i=max(1,3*c1+1);i<=3*c1+3;i++) {
      S1(j = c1) ;
    }
  }
  if (n == 1) {
    S1(i = 1,j = 0) ;
    for (k=0;k<=min(0,0);k++) {
      for (p=max(0,ceild(-3*k-1,3));p<=min(0,floord(-3*k+1,3));p++) {
        S2(i = 1,j = 1,q = -k-p) ;
      }
    }
  }
  if (n >= 2) {
    for (c1=max(0,ceild(n-4,3));c1<=0;c1++) {
      S1(i = 1,j = c1) ;
      for (j=1;j<=min(n,3*c1-n+5);j++) {
        for (k=0;k<=floord(3*c1-j-n+4,3);k++) {
          for (p=ceild(n-2,3);p<=floord(3*c1-j-3*k+2,3);p++) {
            S2(i = 1,q = c1-k-p) ;
          }
        }
      }
      for (i=2;i<=min(n,3*c1+3);i++) {
        S1(j = c1) ;
      }
      for (c2=1;c2<=n-1;c2++) {
        for (j=1;j<=min(n,3*c1-n+5);j++) {
          for (k=0;k<=floord(3*c1-j-n+4,3);k++) {
            for (p=ceild(n-2,3);p<=floord(3*c1-j-3*k+2,3);p++) {
              S2(i = c2+1,q = c1-k-p) ;
            }
          }
        }
      }
    }
  }
  for (c1=max(1,ceild(n-4,3));c1<=floord(n-1,3);c1++) {
    for (j=1;j<=3*c1-n+5;j++) {
      for (k=0;k<=min(0,floord(3*c1-j-n+4,3));k++) {
        for (p=max(ceild(n-2,3),ceild(3*c1-j-3*k,3));p<=min(floord(n,3),floord(3*c1-j-3*k+2,3));p++) {
          S2(i = 1,q = c1-k-p) ;
        }
      }
    }
    for (i=3*c1+1;i<=min(n,3*c1+3);i++) {
      S1(j = c1) ;
    }
    for (c2=1;c2<=n-1;c2++) {
      for (j=1;j<=3*c1-n+5;j++) {
        for (k=0;k<=min(0,floord(3*c1-j-n+4,3));k++) {
          for (p=max(ceild(n-2,3),ceild(3*c1-j-3*k,3));p<=min(floord(n,3),floord(3*c1-j-3*k+2,3));p++) {
            S2(i = c2+1,q = c1-k-p) ;
          }
        }
      }
    }
  }
  for (c1=ceild(n,3);c1<=floord(2*n+1,3);c1++) {
    for (c2=0;c2<=n-1;c2++) {
      for (j=max(1,3*c1-n-1);j<=min(n,3*c1-n+5);j++) {
        for (k=max(0,ceild(3*c1-j-n,3));k<=min(0,floord(3*c1-j-n+4,3));k++) {
          for (p=max(ceild(n-2,3),ceild(3*c1-j-3*k,3));p<=min(floord(n,3),floord(3*c1-j-3*k+2,3));p++) {
            S2(i = c2+1,q = c1-k-p) ;
          }
        }
      }
    }
  }
}
