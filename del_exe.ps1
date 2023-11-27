# PS script to delete all .exe files in a directory and subdirectories
ls *.exe -Recurse | foreach {rm $_}