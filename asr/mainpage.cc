//
//                              Millennium
//                   Distant Speech Recognition System
//                                 (dsr)
//
//  Package: asr
//  Purpose: Auomatic speaker-independent speech recognition.
//  Author:  John McDonough
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or (at
// your option) any later version.
// 
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

/*! \mainpage Millennium Automatic Speech Recognition System
*
* \section introduction Introduction
*
* The Millennium Automatic Speech Recognition System (asr) is a collection of C++ classes intended to
* support automatic speech recognition for both near- and far-field data capture scenarios.
* Like all packages in the Millennium
* group, 'asr' uses the 'swig' tool to generate the wrapper code necessary to
* access all capabilities within the Python interpreter. This approach provides for
* maximal flexibility and configurability.
*
* \section Installation
*
* Here we describe how to install 'asr' on your system.
*
* \subsection components Required components
*
*    To install the 'asr' module, you will need the following components,
*    all of which are available with all major Linux releases (e.g., SuSE 9.2):
*
* - python - scripting language interpretter
* - python-devel - .h files for linking with python
* - numerical python - Matlab like extension to python
* - gsl - GNU Scientific Library
* - swig - simplified wrapper and interface generator
* - autoconf - automatic project configuration
* - automake - automatic project configuration
* - pkgconfig - automatic project configuration
*
*    The following dependencies are optional. If they are installed on your
*    machine, 'autoconf' will find them, then compile and link against them.
*
*    - atlas - blas implementation for linux
*
*    'asr' needs a installed version of 'btk'. If 'btk' is installed with a non standard
*    prefix, like the users home directory, PKG_CONFIG_PATH has to set to the location
*    the 'btk.pc' file is installed.
*
*  setenv PKG_CONFIG_PATH /home/<user-name>/lib/pkgconfig
*
* \subsection getting Getting 'asr'
*
*    The current version of 'asr' can be downloaded from the Distant Speech Recognition
*    companion site at
*
*\verbatim
        http://www.distant-speech-recognition.org
\endverbatim
*
*    Alternatively, the source code can be downloaded directly from the
*    DSR svn repository by typing
*
*\verbatim
       mkdir ~/src
       cd ~/src
       svn co http://distant-automatic-speech-recognition.org/repos/asr/trunk ./asr
\endverbatim
*
*    As the svn repository is under password protection, please contact John McDonough
*    (john.mcdonough@lsv.uni-saarland.de) in order to obtain an account.
*    If you already have an existing working directory that you would like to update, type
*
*\verbatim
       cd ~/src/asr
       svn update .
\endverbatim
*
* \subsection configuration Configuration
*
*    If you wish to install 'asr' in the global space on a given workstation, type
*
*\verbatim
       cd ~/src/asr
       ./autogen.sh
       ./configure
\endverbatim
*
*    If you would like to install 'asr' in some local directory, type for example
*
*\verbatim
       cd ~/src/asr
       ./autogen.sh
       ./configure --prefix=/home/<user-name>
\endverbatim
*
*    where <user-name> is your login id. You need only run the script
*    'autogen.sh' once.
*    If you want to use the 'atlas' blas library, configure with
*
*\verbatim
       ./configure --with-atlas=<path-to-atlas>
\endverbatim
*
* \subsection building Building and Installing
*
*    To build and install 'asr', type
*
*\verbatim
       cd ~/src/asr
       make
       make install
\endverbatim
*
* \subsection environment Adjusting your environment
*
*    In order for Python to be able to find and dynamically link the 'asr'
*    module, it must be on your PYTHONPATH. If you have installed 'asr'
*    locally as described above and you are using 'bash', add the
*    line
*  
*\verbatim
       export PYTHONPATH=/home/<user-name>/lib/python2.3/site-packages:/usr/local/lib/python2.3/site-packages:/usr/lib/python2.3/site-packages
\endverbatim
*
*    to your .bashrc file. If you are using 'tcsh', add the line
*
*\verbatim
       setenv PYTHONPATH /home/jmcd/lib/python2.3/site-packages:/usr/local/lib/python2.3/site-packages:/usr/lib/python2.3/site-packages
\endverbatim
*
*    to your .tcshrc file.
*
* \subsection testing Testing
*
*    To test that everything has been built and installed correctly, start
*    the Python interpretter and type
*
\verbatim
       >>> import asr.sat
\endverbatim
*
*    If you get another Python prompt, everything has worked correctly.
*/
