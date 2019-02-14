# YUMRepoManager

YUMRepoManager allows the user to easily access the YUM's settings as well as to the repositories' configuration files.

You will be able to enable and disable the YUM's plugins, as well as editing their configuration file. The **import and export of repositories** are achievable **by dragging and dropping the .repo files** from and to the file browser. The **createrepo** arguments are also editable.

YUMRepoManager also allows the creation of a local repository from the following three scenarios:

**RPM Folder** - Creating a repository from a directory that contains .rpm files.

**Cache** - Creating a repository from the YUM cache to a directory specified by the user.

**Global Cache** - Creating a repository from the YUM cache to a directory specified by the user. The YUM cache will be linked to the directory path where the repository has been created. Consequently, the YUM cache is unified in a single folder, so the packages installed after this point will be placed in the new path **(that can be a network folder)** instead of the YUM cache **(always local)**.

If the unified folder of the **Global Cache** option is configured as a network folder, this would allow us to set this **shared resource** as **the remote repository of other systems in the local network**.

## Binaries

The RPM binary is available for the **x86_64** and **i686** architectures. Both RPM files were created for **Fedora Linux**, the distribution for which YUMRepoManager is focused on.

[SourceForge](http://sourceforge.net/projects/yumrepomanager/)
