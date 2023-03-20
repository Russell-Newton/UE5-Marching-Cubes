# UE5-Marching-Cubes

<div align="center">
  Marching Cubes in UE5 using the RDG
</div>

## Table of Contents

* [Purpose](#purpose)
* [Explanation](#explanation)
* [Takeaways](#takeaways)

## Purpose

The goal of this project was for me to become more familiar with using the Render Dependency Graph in UE5 for executing Compute Shaders. This project follows from my [port of a class project into UE5](https://github.com/Russell-Newton/CS4795-Port).

I originally tried to implement Marching Cubes with compute shaders in UE4 in fall 2020 and once again in fall 2021 but hit roadblocks both times. I've since learned enough to make a succesful implementation.

## Explanation

This implementation of Marching Cubes is a bit unique. It takes a grid of values like any other implementation, and it uses these values to calculate approximate surface normals and to calculate the vertices (without any duplicates) and triangles required to represent an isosurface. Notably, most implementations that I've seen often duplicate vertices, but this one does not. This is done by saving vertices along voxel lines parallel to the x axis, then the y axis, then the z axis. Shader threads are tasked with initializing the data for a single voxel, including vertices along the edges out of their min corners, the vertices' normals, and the triangles within the voxel. Threads tasked with initializing max-boundary voxels initialize the vertices and normals on the extra boundary edges.

It's worth noting that at the moment, this implementation doesn't take advantage of locality and shared memory. This is something I may work on in the future.

## Takeaways

* Getting buffer data to the GPU is fairly easy, but getting it back from the GPU is more complicated.
  * Buffer data can be passed very easily between RDG passes.
* Executing compute shaders with the RDG and Blueprint libraries isn't much harder than executing vertex/fragment shaders.
* The experience I gained making this implementation (and the implementation itself) will be useful for future projects.
