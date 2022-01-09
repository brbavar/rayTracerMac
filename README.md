# What This Does
This ray tracer creates bitmap images of spherical objects illuminated by a light source represented as a point in 3D space. It uses basic linear algebra to determine whether the imaginary camera's line of sight—which gets pointed at each and every pixel of the image before the program finishes running—intersects with any of those objects. If so, it calculates the intensity of the light at that point of intersection based on the angle at which the light hits the object. 

You can see the kinds of shaded graphics this program is capable of creating by looking through the images in the folder `samplePics`. The files are too big for the images to be displayed within GitHub's UI for this repo. But if you open one of the files on GitHub and then click "View raw," you'll be able to see the picture. The very last sample, `sample5.bmp`, is most representative of the images this ray tracer is currently hard-coded to produce. But it's not too difficult to rewrite the code to generate images similar to the other samples.

# Automated Rendering
If you would like to make more graphics, but you don't care to customize them, the only file you need is `trace.exe`. Download that file, navigate to the directory containing it, and then run it with the command `./trace.exe`. The message "Rendering..." will immediately show up in the console, and in a matter of seconds it should say "Done!" That means the output file `result.bmp` in the present directory is done being populated with pixels. Whenever you feel like it, you can proceed to open that file in your image viewer of choice.

The positions, shapes, sizes, and illumination of the 3D objects don't change when you rerun the program. However, the colors of the shapes vary randomly from one execution to the next.

# Customization
You'll need to edit the source code directly to customize the 3D graphics. To do that, clone this repo on the command line by navigating to the directory you want to put it in and then executing `git clone https://github.com/brbavar/rayTracer.git`.
