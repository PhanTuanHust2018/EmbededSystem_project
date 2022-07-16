#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x38f431f2, "module_layout" },
	{ 0x85bd1608, "__request_region" },
	{ 0x48a84465, "cdev_del" },
	{ 0x6d0b5a7f, "kmalloc_caches" },
	{ 0x285cb869, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x77358855, "iomem_resource" },
	{ 0x97255bdf, "strlen" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x1d37eeed, "ioremap" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe023ffe0, "cdev_add" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xa12d6e96, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DCC8070FF102487CA24E8EC");
