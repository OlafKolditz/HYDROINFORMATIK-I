"""
==============
Custom Ticker1
==============

The new ticker code was designed to explicitly support user customized
ticking. The documentation of :mod:`matplotlib.ticker` details this
process.  That code defines a lot of preset tickers but was primarily
designed to be user extensible.

In this example a user defined function is used to format the ticks in
millions of dollars on the y axis.
"""
from matplotlib.ticker import FuncFormatter
import matplotlib.pyplot as plt
import numpy as np

year = np.arange(11)
publications = [1,1,7,4,8,7,6,7,3,2,3]

fig, ax = plt.subplots()

ax.set_title('Hydroinformatik I 2019 - Notenspiegel')
ax.set_ylabel('Anzahl von Noten')

plt.bar(year, publications)
plt.xticks(year, ('1.0','1.3','1.7','2.0','2.3','2.7','3.0','3.3', '3.7', '4.0', '5.0'))
plt.grid(True)
plt.show()
