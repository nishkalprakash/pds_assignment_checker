## MAKE this the first file to execute at the start

if __name__ == "__main__":
    from lib.pds_selenium import get_assignments
    from lib.pds_file_op import get_a_ql_from_user

    get_assignments(get_a_ql_from_user(q=False))
    # a = input(f"Please enter the {BASE} number: ").strip()
