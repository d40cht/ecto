

#!/usr/bin/env python
import ecto
#from ecto.doc import print_module_doc
import buster

def test_plasm():
    scatter = buster.Scatter(n=3, x=3)
    gather = buster.Gather(n=3)
    plasm = ecto.Plasm()
    for f, t in zip(scatter.outputs.keys(), gather.inputs.keys()):
        plasm.connect(scatter, f, gather, t)
    plasm.go(gather)
    result = gather.outputs.out
    assert(result == 9) # 3 * 3
    
if __name__ == '__main__':
    test_plasm()



