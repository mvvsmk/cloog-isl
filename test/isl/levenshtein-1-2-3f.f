! Generated from ../../../git/cloog/test/levenshtein-1-2-3f.cloog by CLooG 0.14.0-135-g7671e98 gmp bits in 0.12s.
S1(i = 0,j = 0)
S2(i = 1,j = 0)
S3(i = 1,j = 1)
DO i=2, N
  S2(j = 0)
  DO j=1, i-1
    S6
  END DO
  S3(j = i)
END DO
S7(i = N+1,j = 0)
DO j=1, N
  S6(i = N+1)
  S8(i = N+1)
END DO
DO i=N+2, 2*M-N-2
  j = FLOOR(REAL(i-N-1)/REAL(2))
  S7
  IF (MOD(i+N, 2) == 0) THEN
    S5(j = (i-N)/2)
    S8(j = (i-N)/2)
  END IF
  DO j=CEILING(REAL(i-N+1)/REAL(2)), FLOOR(REAL(i+N-1)/REAL(2))
    S6
    S8
  END DO
  IF (MOD(i+N, 2) == 0) THEN
    S4(j = (i+N)/2)
    S8(j = (i+N)/2)
  END IF
END DO
DO i=2*M-N-1, 2*M-2
  DO j=i-M+1, M-1
    S6
  END DO
END DO
