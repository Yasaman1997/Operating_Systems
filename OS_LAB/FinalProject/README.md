
**Project description**

*You should add a misc char device driver to your Linux
kernel using kernel modules

● The device should implement the read and write functions

● When the character device node is read from, your name is
returned to the caller

● When the character device node is written to, the data sent
to the kernel needs to be checked. If it matches your name,
then return a correct write return value. If the value does not
match your name, return the "invalid value" error value

● Device node should show up in /dev/oslab

● The misc device should be registered when
your module is loaded, and unregistered when
it is unloaded.

● Each part of code should have comments as
description.






