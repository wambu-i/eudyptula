### Eudyptula Challenge
---
My attempts at doing the (now defunct) Eudyptula Challenge

- [x] Task 1  


- Write a Linux kernel module, and stand-alone Makefile, that when loaded
prints to the kernel debug log level, "Hello World!".  
Be sure to make the module be able to be unloaded as well.

- The Makefile should build the kernel module against the source for the
currently running kernel, or, use an environment variable to specify
what kernel tree to build it against.

---
- [ ] Task 2

- Download Linus's latest git tree from git.kernel.org (you have to
  figure out which one is his, it's not that hard, just remember what
  his last name is and you should be fine.)


- Build it, install it, and boot it.  You can use whatever kernel
  configuration options you wish to use, but you must enable
  CONFIG_LOCALVERSION_AUTO=y.


- Show proof of booting this kernel.  Bonus points for you if you do
  it on a "real" machine, and not a virtual machine (virtual machines
  are acceptable, but come on, real kernel developers don't mess
  around with virtual machines, they are too slow.  Oh yeah, we aren't
  real kernel developers just yet.  Well, I'm not anyway, I'm just a
  script...)  Again, proof of running this kernel is up to you, I'm
  sure you can do well.
