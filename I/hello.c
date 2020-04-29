#include <linux/init.h>
#include <linux/module.h>

MODULE_AUTHOR("Wambui Karuga");
MODULE_DESCRIPTION("Hello World");
MODULE_LICENSE("GPL v3");

static int hello_init(void)
{
	printk(KERN_INFO "Hello there!");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "I'm going...");
}

module_init(hello_init);
module_exit(hello_exit);
