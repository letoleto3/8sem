double hx, hy, tau,
       thx, thy, /*thx05, thy05,*/ thx2, thy2, /*thx4, thy4,*/ thx32, thy32,
       tau2, tau4, tau6, thxx8, thxx6, thyy8, thyy6, thxy, Max, May, pressure;
double mu, MUM, MU8x, MU8y, MU6x, MU6y, MUv1, MUv2;

int mm = 0, mmg00 = 0, mmgR0 = 0, mmgL0 = 0, mmg0R = 0, mmg0L = 0,
    mmv100 = 0, mmv1R0 = 0, mmv10R = 0, mmv1L0 = 0, mmv10L = 0/*, mmv1RR, mmv1LL, mmv1RL, mmv1LR*/,
    mmv200 = 0, mmv2R0 = 0, mmv20R = 0, mmv2L0 = 0, mmv20L = 0/*, mmv2RR, mmv2LL, mmv2LR, mmv2RL*/;
double g00 = 0, gR0 = 0, g0R = 0, gL0 = 0, g0L = 0,
       v100 = 0, v1R0 = 0, v10R = 0, v1L0 = 0, v10L = 0, v1RR = 0, v1LL = 0, v1LR = 0, v1RL = 0,
       v200 = 0, v2R0 = 0, v20R = 0, v2L0 = 0, v20L = 0, v2RR = 0, v2LL = 0, v2LR = 0, v2RL = 0;
double tmp, tt, xx, yy, tmp1;

double g_2R = 0, g_3R = 0, v1_2R = 0, v1_3R = 0,
       g_2L = 0, g_3L = 0, v1_2L = 0, v1_3L = 0,
       g_2T = 0, g_3T = 0, v2_2T = 0, v2_3T = 0,
       g_2B = 0, g_3B = 0, v2_2B = 0, v2_3B = 0;
