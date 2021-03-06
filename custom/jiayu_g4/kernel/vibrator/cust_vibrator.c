#include <cust_vibrator.h>
#include <linux/types.h>

static struct vibrator_hw cust_vibrator_hw = {
	.vib_timer = 25,
  #ifdef CUST_VIBR_LIMIT
	.vib_limit = 5,
  #endif
};

struct vibrator_hw *get_cust_vibrator_hw(void)
{
    return &cust_vibrator_hw;
}

