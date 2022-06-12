## About

zIRCaloyd is C++ moduler IRCd client with a focus on security. We are a downstream fork of InspIRCd.

## Supported Platforms

zIRCaloyd is supported on the following platforms:

- Most recent BSD variants using the Clang or GCC compilers and the GNU toolchains (Make, etc).

- Most recent Linux distributions using the Clang or GCC compilers and the GNU toolchain.

- The most recent three major releases of macOS using the AppleClang, Clang, or GCC (*not* LLVM-GCC) compilers and the GNU toolchains.

- Windows 7 or newer using the MSVC 14 (Visual Studio 2015) compiler and CMake 3.8 or newer.

Alternate platforms and toolchains may also work but are not officially supported by the InspIRCd team. Generally speaking if you are using a reasonably modern UNIX-like system you should be able to build InspIRCd on it.

If you encounter any bugs then [please file an issue](https://github.com/inspircd/inspircd/issues/new/choose).

## Installation

### Linux/Unix

Install dependancies. On debian this will be:

	`apt install libmaxminddb-dev libldap-dev libmysqlclient-dev libre2-dev libsqlclient-dev libpq-dev libtre-dev libsqlite3-dev libgnutls28-dev libmbedtls-dev`

Checkout the repoistory:

	 `git clone https://gitlab.com/zIRCaloyd/zircaloyd`

Change current working directory (CWD) to `zircaloyd`:

        `cd zircaloyd`

Run configure script:

    	`./configure`

Build the project, replace `N` with the number of cores you have minus 1 (eg: if you have 4 cores use 3). If you are unsure, just use 2, or ommit `-j` entierly.

      	`make -j3 install`

### InspIRCd Documentation

A guide about how to do this is available on [the InspIRCd docs site](https://docs.inspircd.org/3/installation/source).

Building from source on Windows is generally not recommended but [a guide is available](https://github.com/inspircd/inspircd/blob/master/win/README.txt) if you wish to do this.

If you are running on CentOS 7, Debian 10/11/12, Rocky Linux 8, Ubuntu 18.04/20.04/22.04, or Windows 8+ binary packages are available from [the downloads page](https://github.com/inspircd/inspircd/releases/latest).

A [Docker](https://www.docker.com) image is also available. See [the inspircd-docker repository](https://github.com/inspircd/inspircd-docker) for more information.

Some distributions ship an InspIRCd package in their package managers. We generally do not recommend the use of such packages as in the past distributions have made broken modifications to InspIRCd and not kept their packages up to date with essential security updates.

## License

zIRCaloyd is licensed under [version 2 of the GNU General Public License](https://docs.inspircd.org/license).

## External Links
* [zIRCaloyd GitLab](https://gitlab.com/zIRCaloyd/zircaloyd)


### InspIRCd Resources
* [InspIRCd Website](https://www.inspircd.org)
* [InspIRCd GitHub](https://github.com/inspircd)
* [InspIRCd Documentation](https://docs.inspircd.org)
* [Twitter](https://twitter.com/inspircdteam)
* [Mastodon](https://fosstodon.org/@inspircd)
* Support IRC channel &mdash; \#inspircd on irc.inspircd.org
* Development IRC channel &mdash; \#inspircd.dev on irc.inspircd.org
* InspIRCd test network &mdash; testnet.inspircd.org
