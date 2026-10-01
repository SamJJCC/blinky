#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>

// You will write all your code for this tutorial here!
int main()
{
    bn::core::init();
    bn::backdrop::set_color(bn::color(31, 1, 10));
    while (true)
    {
        bn::core::update();
    }
}