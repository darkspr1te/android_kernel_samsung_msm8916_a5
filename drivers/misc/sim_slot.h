#ifdef CONFIG_CHECK_SIMSLOT_COUNT

#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/i2c-gpio.h>
#include <asm/gpio.h>
#include <linux/of_gpio.h>

#define SINGLE_SIM_VALUE 0
#define DUAL_SIM_VALUE 1

enum
{
        NO_SIM = 0,
        SINGLE_SIM,
        DUAL_SIM,
        TRIPLE_SIM
};

#endif
