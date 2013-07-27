*       common6.
*       -------
*
      PARAMETER (NMAX=1000)
      IMPLICIT REAL*8  (A-H,O-Z)
*
      REAL*8 M_CRIT
      COMMON/NBODY/  X(3,NMAX),X0(3,NMAX),X0DOT(3,NMAX),F(3,NMAX),
     &               FDOT(3,NMAX),BODY(NMAX),XDOT(3,NMAX),D1(3,NMAX),
     &               D2(3,NMAX),D3(3,NMAX),STEP(NMAX),T0(NMAX),
     &               N,NMASS,NAME(NMAX),KZ(10),NSTEPS,NTIMER,NBLOCK,
     &               IDUM1,NDUM(4),G_P,G_D,T_DEP,R_EDGE,R_IN,DENS0,
     &               DENS_P,RADIUS(NMAX),T_TIDAL1(NMAX),T_TIDAL2(NMAX),
     &               M_CRIT, IESC
*
      COMMON/PARAMS/ CPU,CPU0,CPUTOT,ETA,DELTAT,TPRINT,TCRIT,QE,
     &               TWOPI,ONE3,ONE6,ONE9,ONE12,
     &               TIME,ZMASS,BE(3),CMR(4),CMRDOT(4),ZKIN,POT,
     &               ERRTOT,DETOT,TCR,DTMAX
*
      COMMON/BHREG1/ ETAU,DTMIN,RMIN,RMIN2,CMSEP2,GMIN,
     &               P,PP,PDOT,PDOT2,PDOT3,PDOT4,DTAU,EBIN,R(3),
     &               RDOT(3),RDOT2(3),RDOT3(3),RDOT4(3),RDOT5(3),
     &               B(3),BDOT(3),BDOT2(3),BDOT3(3),BDOT4(3),
     &               TDOT2,TDOT3,TDOT4,RR0,GAMMA
*
      COMMON/BHNAME/ NTOT,NZERO,NPAIRS,IFIRST,ICOMP,JCOMP,IPHASE,
     &               NSTEPU,NKSTRY,LIST(NMAX),JLIST(NMAX)
*
      COMMON/BLOCKS/ TPREV,TBLOCK,DTK(40),TNEXT(NMAX)
