try:
    1/0
except ZeroDivisionError:
    print("caught division by 0")
except Exception:
    print("some exception happend")
