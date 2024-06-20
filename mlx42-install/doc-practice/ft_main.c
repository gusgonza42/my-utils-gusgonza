/**
 * Main MLX handle, carries important data in regards to the program.
 * @param window The window itself.
 * @param context Abstracted opengl data.
 * @param width The width of the window.
 * @param height The height of the window.
 * @param delta_time The time difference between the previous frame and the current frame.
 */
typedef struct mlx
{
	void*		window;
	void*		context;
	int32_t		width;
	int32_t		height;
	double		delta_time;
}	mlx_t;

// Escrito por Bruh

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "MLX42/MLX42.h"
#define WIDTH 256
#define HEIGHT 256

// Salir del programa en caso de error.
static void ft_error(void)
{
    fprintf(stderr, "%s", mlx_strerror(mlx_errno));
    exit(EXIT_FAILURE);
}

// Imprimir el ancho y alto de la ventana.
static void ft_hook(void* param)
{
    const mlx_t* mlx = param;

    printf("WIDTH: %d | HEIGHT: %d\n", mlx->width, mlx->height);
}

int32_t main(void)
{
    // MLX te permite definir su comportamiento principal antes del inicio.
    mlx_set_setting(MLX_MAXIMIZED, true);
    mlx_t* mlx = mlx_init(WIDTH, HEIGHT, "42Balls", true);
    if (!mlx)
        ft_error();

    /* Haz cosas */

    // Crear y mostrar la imagen.
    mlx_image_t* img = mlx_new_image(mlx, 256, 256);
    if (!img || (mlx_image_to_window(mlx, img, 0, 0) < 0))
        ft_error();

    // Incluso después de mostrar la imagen, aún podemos modificar el búfer.
    mlx_put_pixel(img, 0, 0, 0xFF0000FF);

    // Registrar un gancho y pasar mlx como parámetro opcional.
    // NOTA: ¡Haz esto antes de llamar a mlx_loop!
    mlx_loop_hook(mlx, ft_hook, mlx);
    mlx_loop(mlx);
    mlx_terminate(mlx);
    return (EXIT_SUCCESS);
}

