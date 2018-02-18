//int box[] = {0x7FFFF, 0x7FFFF, 0x60003, 0x60003, 0x60003, 0x60003, 0x60003, 0x60003, 0x60003, 0x60003, 0x7FFFF, 0x7FFFF};

//int a[] = {0xF8, 0x61FC, 0x1E3FE, 0x3E3FE, 0x3C787, 0x78707, 0x70707, 0x70707, 0x70707, 0x70706, 0x7060E, 0x7060C, 0x38E38, 0x3FFFC, 0x1FFFF, 0xFFFF, 0x7, 0x7};


//int a[14] = {0x1, 0xf, 0x7e, 0x3f0, 0x1fb0, 0xfc30, 0xe030, 0xe030, 0xfc30, 0x1fb0, 0x3f0, 0x7e, 0xf, 0x1};


int space[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

//int A[] = {0x2, 0x2, 0xE, 0x72, 0x382, 0x1D00, 0xE100, 0x38100, 0x3E100, 0xFD00, 0x1F82, 0x3F2, 0x7E, 0xE, 0x02, 0x02, 0x0};
//int B[] = {0x0, 0x0, 0x20002, 0x20002, 0x3FFFE, 0x3FFFE, 0x20402, 0x20402, 0x20402, 0x20402, 0x20402, 0x10A02, 0xF204, 0x61F8, 0xF0, 0x0, 0x0};
//int A[18] = {0x0, 0x700, 0x1f00, 0x7e00, 0xf801, 0xe003, 0xe00f, 0x603e, 0x607c, 0xc0f0, 0xc0ff, 0xfc0f, 0x7f00, 0x700, 0x0, 0x0, 0x0, 0x0};

int A[18] = {0x0, 0x7, 0x1f, 0x7e, 0x1f8, 0x3e0, 0xfe0, 0x3e60, 0x7c60, 0xf0c0, 0xffc0, 0xffc, 0x7f, 0x7, 0x0, 0x0, 0x0, 0x0};

int B[18] = {0x0, 0x0, 0xffff, 0xffff, 0xc0c3, 0xc0c3, 0xc0c3, 0xe1c3, 0x63e3, 0x3fe7, 0x1e3e, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};

int C[18] = {0x0, 0x1f8, 0x7fe, 0xf06, 0x3c03, 0x7003, 0x6003, 0xc003, 0xc006, 0xc00e, 0xf00c, 0xf000, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};

int D[18] = {0x0, 0x0, 0xfffe, 0xfffe, 0xc003, 0x6003, 0x6003, 0x3003, 0x3003, 0x1807, 0x1c06, 0xe1e, 0x7fc, 0x1f0, 0x0, 0x0, 0x0, 0x0};

int E[18] = {0x0, 0xfffe, 0xffff, 0xc183, 0xc183, 0xc183, 0xc383, 0xc303, 0xc303, 0xc303, 0xc303, 0x4000, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};

int F[18] = {0x0, 0x0, 0xffff, 0xffff, 0xc180, 0xc300, 0xc300, 0xc300, 0xc300, 0xc300, 0xc300, 0x6300, 0x6000, 0x0, 0x0, 0x0, 0x0, 0x0};

int G[18] = {0x0, 0x1fc, 0x7fe, 0x1e07, 0x3803, 0x70c3, 0xe0c3, 0xc1c3, 0xc186, 0xc18e, 0x619c, 0x61f8, 0x1e0, 0x180, 0x0, 0x0, 0x0, 0x0};

int H[18] = {0x0, 0x0, 0xffff, 0xffff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x180, 0x180, 0x180, 0x180, 0xffff, 0xffff, 0x0, 0x0, 0x0};

int I[18] = {0xc003, 0xc003, 0xc003, 0xc003, 0xffff, 0xffff, 0xc003, 0xc003, 0xc003, 0x4003, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};

int J[18] = {0x0, 0x38, 0x3c, 0xe, 0xc007, 0xc003, 0xc003, 0xc00f, 0xfffe, 0xfff0, 0xc000, 0xc000, 0xc000, 0x0, 0x0, 0x0, 0x0, 0x0};

int K[18] = {0x0, 0x0, 0xffff, 0xffff, 0x3c0, 0x660, 0xc38, 0x381c, 0x700e, 0xe006, 0xc003, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};

int L[18] = {0x0, 0xffff, 0xffff, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};

int M[18] = {0x0, 0x7, 0x3f, 0x3fe, 0x7fc0, 0xfc00, 0x3fc0, 0x3f8, 0x7e, 0xf, 0x7e, 0x3f0, 0x3f80, 0xf800, 0x7fc0, 0x1fc, 0x1f, 0x3};

int N[18] = {0x0, 0x0, 0xffff, 0xffff, 0x7800, 0x1c00, 0xe00, 0x700, 0x1c0, 0xe0, 0x70, 0x38, 0x1c, 0x6, 0xffff, 0x7fff, 0x0, 0x0};

int O[18] = {0x0, 0x3f0, 0xffc, 0x1e0e, 0x3806, 0x7007, 0xe003, 0xc003, 0xc003, 0xc003, 0xc007, 0xc006, 0xe01c, 0x7078, 0x3ff0, 0x1fc0, 0x0, 0x0};

int P[18] = {0x0, 0xffff, 0xffff, 0xc0c0, 0xc0c0, 0xc0c0, 0xe1c0, 0x6380, 0x3f00, 0x1e00, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};

int R[18] = {0x0, 0x0, 0x0, 0xffff, 0xffff, 0xc060, 0xc070, 0xc070, 0x6078, 0x70d8, 0x39cc, 0x1f8e, 0xf07, 0x3, 0x0, 0x0, 0x0, 0x0};

int S[18] = {0x0, 0x0, 0x0, 0xc, 0x1e0e, 0x3f07, 0x7383, 0x6183, 0xc183, 0xc183, 0xc183, 0xc1c3, 0xc0c7, 0x40fe, 0x3c, 0x0, 0x0, 0x0};

int T[18] = {0x0, 0x0, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xffff, 0xffff, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0, 0x0, 0x0};

int U[18] = {0x0, 0x0, 0x0, 0xfff0, 0xfffc, 0x1e, 0x7, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3e, 0xfff8, 0xffc0, 0x0, 0x0, 0x0};

int V[18] = {0x0, 0x0, 0x0, 0xe000, 0xfe00, 0xfc0, 0x1f8, 0x3f, 0x7, 0x3f, 0x1f8, 0x7c0, 0x3f00, 0xf800, 0xc000, 0x0, 0x0, 0x0};

int X[18] = {0x0, 0x3, 0xc007, 0xe00e, 0x781c, 0x3c38, 0xef0, 0x7e0, 0x3c0, 0x7e0, 0xe70, 0x3c3c, 0x781e, 0xe007, 0xc003, 0x0, 0x0, 0x0};

int Y[18] = {0x0, 0x0, 0x0, 0x6000, 0x7000, 0x3c00, 0xf00, 0x383, 0xee, 0x7c, 0x1f0, 0x7c0, 0x1e00, 0x7800, 0x6000, 0x0, 0x0, 0x0};

int Z[18] = {0x0, 0x0, 0xc007, 0xc00f, 0xc03f, 0xc07b, 0xc0f3, 0xc3c3, 0xc783, 0xcf03, 0xdc03, 0xf803, 0xf003, 0xe003, 0xc003, 0x0, 0x0, 0x0};
