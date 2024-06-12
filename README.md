# PrintSpoofer
Based on the CVE-2021-34527
From LOCAL/NETWORK SERVICE to SYSTEM by abusing `SeImpersonatePrivilege` on Windows 10 and Server 2016/2019.
This code is based on  [https://itm4n.github.io/printspoofer-abusing-impersonate-privileges/](https://itm4n.github.io/printspoofer-abusing-impersonate-privileges/).

<p align="center">
  <img src="demo.gif">
</p>

## Usage

To avoid signature detection of microsoft defender I have hard coded the arguments, renamed methods, and removed print statements. This code is working as of 6/10/2024.

Simply execute it with ".\Printer.exe" and enjoy the system shell.
