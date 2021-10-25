# Multicore_ParallelRayTracing
Final Project for Multicore Processors Course at NYU: Parallel Ray Tracing Algorithm\
**Team Member:** Hanlin He, Yaowei Zong, Wenbo Song

## Source Code

**Intent**\
This repository is the skeleton of a ray tracer which will be modified to a parallel version as the final project of Multicore Processor Fall 2021 at NYU.\
\
**Downloading The Source Code**\
This project is mostly writen in C++, to clone the repository, you can
```zsh
git clone git@github.com:HerlinHe/Multicore_ParallelRayTracing.git
```
Remember to create a new brach when you do your part of work.\
\
**Build and Run**\
You need create a ```build``` directory in the root and run program there, do not generate binary file outside of it.
```zsh
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make
./parallel_ray_tracing > YourFileName.ppm
```
Making ```-DCMAKE_BUILD_TYPE``` to ```Release``` then you can accelerate your program.\
\
**What You should Get**\
You can get the following image following the instruction. It takes me about 25mins to produce this picture on my laptop, a Macbook Pro 16' with Intel processor. Hope our parallel version can perform better.
![](img/image.png?raw=true)
