#Dullahan#

**[Dullahan](http://en.wikipedia.org/wiki/Dullahan)** is an Irish word meaning "headless".

> *The Irish dullahan (also Gan Ceann, meaning "without a head" in Irish) is a type of unseelie
> fairy.*
> 
> *The dullahan is a headless rider, usually on a black horse who carries his or her own head 
> under one arm.* 
> 
> [http://en.wikipedia.org/wiki/Dullahan](http://en.wikipedia.org/wiki/Dullahan)

 
The **[Dullahan](https://github.com/LeeSanderson/Dullahan)** project is an attempt to create a .NET headless browser by compiling the Qt and Webkit libraries into an C++/CLI wrapper. 

**NOTE: This project has been put on hold due to the apparent inability to link a C++/CLI assembly to the statically linked PhantomJS/QT libraries. This seems to be an limitation of the Visual Studio compiler in that the `/clr` switch is severely limited as does not support `/MTd` (multi-threaded debug) or `/MT` (multi-threaded) switches required to be able to statically link the QT libraries. We could dynamically link the QT libraries but this would require that the client machine that hosted the Dullahan app had the QT DLLs installed.** 

Dullahan is built on top of Open SSL and the Qt Webkit projects. The Qt source files are sourced from [PhantomJS](http://phantomjs.org/) rather than Qt - mainly because PhantomJS is a headless browser and it only uses a subset of the Qt source files (which is quite large).

## Note ##
This is a work in progress. The plan is as follows:

1. Build Qt/Webkit libraries from PhantomJS (including Open SSL) **[DONE]**
2. Create C++/CLI wrapper core assembly as bridge between Webkit and .NET **[ON HOLD: It seems that it is not possible to statically link a C++/CLI assembly to the PhantomJS/QT libraries]**
3. Create managed code assembly to simplify usage of core assembly.
4. Create examples of different usage scenarios (e.g. screen capture, page automation etc.)
5. Create nuget package
6. Integrate into Visual Studio/IDE (debugger extensions, code generators, project templates etc.)


## Building ##
    
### Prerequisties ###

1. Install Microsoft Visual C++ version 2012 (the [Express edition](http://www.microsoft.com/en-gb/download/details.aspx?id=34673) should work just fine).
2. Install [ActivePerl 5](http://www.activestate.com/activeperl/downloads) (the free Community Edition should work fine).
3. Download latest stable version of Open SSL source code from [http://www.openssl.org/source/openssl-1.0.1h.tar.gz](http://www.openssl.org/source/openssl-1.0.1h.tar.gz) and put in the root directory of the your local Dullahan repository (the directory containing the Dullahan.bat file).
4. Download latest stable version of PhantomJS source code from [https://github.com/ariya/phantomjs/archive/1.9.7.zip](https://github.com/ariya/phantomjs/archive/1.9.7.zip) and put in the root directory of the your local Dullahan repository.

### Building the WebKit libraries ###

**Warning**: Compiling PhantomJS from source takes a long time (several hours), mainly due to thousands of files in the WebKit module. 

1. Double click on the Dullanhan.bat batch file in the root directory of the your local Dullahan repository (this just sets up a command prompt and adds [NANT](http://nant.sourceforge.net/) to the path).
2. Run `nant` - this executes the `Prep.build` script which extracts the source code for Open SSL and PhantomJS from the zip files and builds them four times (generating the Qt libraries for 32-bit debug, 32-bit release, 64-bit debug and 64-bit release).
3. Once this completes (several hours later) you should have 4 directories under the `Lib` directory containing the Qt libraries, a copy of the Qt includes in the `Includes` directory and a copy of the Qt `moc.exe` tool in the `Tools` directory. These are required for the next stage of the build - building the C++/CLI wrapper.
4. The `LibSrc` directory can be delete once this process completes.