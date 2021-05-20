## MAKE this the first file to execute at the start

if __name__ == "__main__":
    from lib.pds_globals import BASE
    from lib.pds_selenium import get_assignments
    a = input(f"Please enter the {BASE} number: ").strip()
    get_assignments(a)