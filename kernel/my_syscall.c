#include <linux/syscalls.h>

SYSCALL_DEFINE0(mycall)
{
	printk("System Call Example! hanseongjae 20200845\n");

	return 0;
}
