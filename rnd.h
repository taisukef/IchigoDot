// random

// xorshift : http://www.jstatsoft.org/v08/i14/paper。Marsaglia (July 2003). “Xorshift RNGs”
// http://hexadrive.sblo.jp/article/63660775.html

static unsigned long rndk = 123456789;
static unsigned long rndy = 362436069;
static unsigned long rndz = 521288629;
static unsigned long rndw = 88675123;

unsigned int rnd() {
	unsigned long t = rndk ^ (rndk << 11);
	rndk = rndy;
	rndy = rndz;
	rndz = rndw;
	return rndw = (rndw ^ (rndw >> 19)) ^ (t ^ (t >> 8));
}

/*
void random_save() {
	LPC_PMU->GPREG0 = rndk;
	LPC_PMU->GPREG1 = rndy;
	LPC_PMU->GPREG2 = rndz;
	LPC_PMU->GPREG3 = rndw;
}
void random_init() {
	// 保存可能データ GPREG0 GPREG1 GPREG2 GPREG3 GPREG4(11bit〜31bitまで)
	long k = LPC_PMU->GPREG0;
	if (k) {
		rndk = k;
		rndy = LPC_PMU->GPREG1;
		rndz = LPC_PMU->GPREG2;
		rndw = LPC_PMU->GPREG3;
	}
}
*/
