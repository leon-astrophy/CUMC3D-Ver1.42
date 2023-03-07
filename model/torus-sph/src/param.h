!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
! PARAMETER files for the accretion torus problem
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

! adiabatic index !
REAL*8, PARAMETER :: gamma = (5.0d0/3.0d0)

! angular velocity gradient !
REAL*8, PARAMETER :: q_grad = 2.0d0

! inner (equatorial) radius of the torus !
REAL*8, PARAMETER :: s_0 = 100.0d0

! outer (equatorial) radius of the torus !
REAL*8, PARAMETER :: s_1 = 140.0d0

! (equatorial) radius where the density is at maximum !
REAL*8, PARAMETER :: s_max = 120.0D0

! schwarzschild radius !
REAL*8, PARAMETER :: r_sh = 1.0

! minimum density (fraction) to define the last contour of the vector potential !
REAL*8, PARAMETER :: rho_cut = 1.0d-3

! plasma beta parameter !
REAL*8, PARAMETER :: p_beta = 100.0d0

! atmospheric density !
REAL*8, PARAMETER :: rho_fac = 1.0d-6

! maximum density !
REAL*8, PARAMETER :: rho_max = 1.0d0
