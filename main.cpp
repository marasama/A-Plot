#include "A_Plot.hpp"
#include <cmath>

int main()
{
    A_Plot plot;

    Plot line1 = plot.createLinePlotX(2.0, 1.0, -5.0, 5.0, "y = 2x + 1", "#FF0000", 2);
    Plot line2 = plot.createLinePlotY(1.0, 0.0, -3.0, 3.0, "x = y", "#0000FF", 2);
    
    plot.plotMultiple({line1, line2});
    
    return (0);
}