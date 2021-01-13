from pathlib import Path


def push(path_str, text):
    with Path(path_str).open("a+") as f:
        f.write(text + "\n")


def init():
    # push("total_marks.csv",'"Students","Total_marks"')
    r = "results.csv"
    Path(r).write_text("")
    n = len(list(Path.cwd().glob("Assign*")))
    header = [[f'"Students"'] + [f"Assign_{i}" for i in range(1, n + 1)] + ["Total"]]
    results = []
    std_dict = {}

    for a in range(1, n + 1):
        report = Path(f"Assignment_{a}/Assignment_{a}_report.csv")
        text = report.read_text()
        text_list = text.split('"\n"')
        head = text_list[0].split(",")
        index, m = [(i, k) for i, k in enumerate(head) if k.startswith('"Total')][0]
        m = int(m.split("(")[1][:-2])
        lines = [f'"{i}"' for i in text_list[1:]]  # padding with quotes
        arr = []
        print(m)
        for line in lines:
            l = line.split(",")
            student, marks = (l[0].strip('"'), (float(l[index]) / m) * 10)
            # print(f"{student},{marks}")
            try:
                std_dict[student].append(marks)
            except Exception as e:
                print(e, str(e))
                print(a, student)
                std_dict[student] = [marks]
            # print("*" * 80)
    from pprint import pprint

    for s, ml in std_dict.items():
        results.append(
            [f'"{s}"'] + list(map(str, ml)) + [f"{(sum(ml) * 100) / (n * 10):.1f}"]
        )
    results.sort(key=lambda x: x[-1])
    results = header + results
    pprint(results)
    push(r, "\n".join(",".join(i) for i in results))
    # pprint(results)


if __name__ == "__main__":
    init()