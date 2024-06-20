#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include "MLX42/MLX42.h"
#define WIDTH 720
#define HEIGHT 480

void my_scrollhook(double xdelta, double ydelta, void* param)
{
    // Detección simple de hacia arriba o hacia abajo.
    if (ydelta > 0)
        puts("¡Arriba!");
    else if (ydelta < 0)
        puts("¡Abajo!");
    
    // También puede detectar una rueda de ratón que se mueve a lo largo del eje X (por ejemplo, MX Master 3)
    if (xdelta < 0)
        puts("¡Deslízate hacia la izquierda!");
    else if (xdelta > 0)
        puts("¡Deslízate hacia la derecha!");
}

int32_t main(void)
{
    mlx_t* mlx;

    if (!(mlx = mlx_init(WIDTH, HEIGHT, "MLX42", true)))
        return (EXIT_FAILURE);

    mlx_scroll_hook(mlx, &my_scrollhook, NULL);
    mlx_loop(mlx);
    mlx_terminate(mlx);
    return (EXIT_SUCCESS);
}

