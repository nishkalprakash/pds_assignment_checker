from pathlib import Path

# from init import BASE


# def push(path_str, text):
#     with Path(path_str).open("a+") as f:
#         f.write(text + "\n")


def init2(BASE, WEIGHTAGE):
    # push("total_marks.csv",'"Students","Total_marks"')
    r = "results.csv"
    Path(r).write_text("")
    n = len(list(Path.cwd().glob(f"{BASE}*")))
    header = [
        [f'"Students"']
        + [f"{BASE}_{i}" for i in range(1, n + 1)]
        + [f"Total [{BASE}] (100)"]
        + [f"Weighted_Total [{BASE}] ({WEIGHTAGE})"]
    ]
    results = []
    std_dict = {}

    for a in range(1, n + 1):
        report = Path(f"{BASE}_{a}/{BASE}_{a}_report.csv")
        text = report.read_text()
        text_list = text.strip().split("\n")
        head = text_list[0].split(",")
        index, m = [
            (i, k) for i, k in enumerate(head) if k.strip('"').startswith("Total")
        ][0]
        m = int(m.strip('") ').split("(")[1])
        # Marks are taken directly from the total column, so if marks just deducted from there, its OK

        lines = [f'"{i}"' for i in text_list[1:]]  # padding with quotes
        arr = []
        # print(m)
        for line in lines:
            l = line.split(",")
            student, marks = (l[0].strip('"'), (float(l[index]) / m) * 10)
            # print(f"{student},{marks}")
            try:
                std_dict[student].append(marks)
            except Exception as e:
                # print(e, str(e))
                # print(a, student)
                std_dict[student] = [marks]
            # print("*" * 80)
    # from pprint import pprint

    Weighted_Total = 0
    for s, marks_list in std_dict.items():
        """For each student get the entry ready"""
        ## For Weighted_Total need to :
        ## we need to
        # pick marks pair wise,
        # sum them,
        # get Top 8 (reverse sort them),
        # scale total out of 40 (2.5 each marks) or (sum(result)/((n/2)*20))*40
        # Here n/2 because there are half elements in the list now
        TOP_ = 4
        w8_total = sorted(
            map(lambda x: sum(x), zip(marks_list[::2], marks_list[1::2]))
        )[-TOP_:]

        Weighted_Total = sum(w8_total) * WEIGHTAGE / (len(w8_total) * 20)

        ## DAFAQ HAPPENING HERE:
        ## student + marks + total(rescaled to 100)
        ## here marks are already out of 10
        results.append(
            [f"{s}"]
            + list(map(str, marks_list))
            + [f"{(sum(marks_list) * 100) / (n * 10):.1f}"]
            + [f"{Weighted_Total:.1f}"]
        )

    results.sort(key=lambda x: x[0])
    results = header + results
    return results
    # pprint(results)

    # pprint(results)


if __name__ == "__main__":
    temp_res = []
    jobs = [
        ("Assignment", 40),
        ("Lab_Test_1_Part", 20),
        ("Lab_Test_2_Part", 20),
        ("Lab_Test_3_Part", 20),
    ]
    for BASE, WEIGHTAGE in jobs:
        temp_res.append(init2(BASE, WEIGHTAGE))
        print(f"DONE FOR THE {BASE}")
    # results = map(
    #     lambda x: x[0] + x[1][1:] + [x[0][-1] + x[1][-1]], zip(results1, results2)
    # )
    results = []
    for row in zip(*[i for i in temp_res]):
        temp = row[0]
        tot = [row[0][-1]]

        for test in row[1:]:
            temp.extend(test[1:])
            tot.append(test[-1])
        try:
            ## Here top 2 among the lab tests are taken and added
            total = f"{float(tot[0]) + sum(sorted(map(float, tot[1:]))[-2:]):.1f}"
        except:
            total = f"FINAL_Weighted_Total ({sum(i[1] for i in jobs[:-1])})"
        temp.append(total)
        # for header row
        results.append(temp)

    push("results.csv", "\n".join(",".join(i) for i in results))