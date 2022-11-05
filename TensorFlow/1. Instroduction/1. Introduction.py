# download anaconda https://www.anaconda.com/products/distributionS
#
# download la driverele de la nvidia https://www.nvidia.com/Download/index.aspx
#
# dupa ce am instalat anaconda trebuie sa ne cream virtual environmentul
# asta se face din anaconda prompt deschis ca administrator
# Ca sa cream venv ul pe gpu o sa urmam urmatorii pasi:
#       scriem comanda in anaconda prompt: conda create --name tf tensorflow-gpu
#                                          conda create -n "myenv" python=3.3.0 cu versiune specifica de python
#       prin comanda asta o sa instaleze toate programele de la cuda de care avem nevoie si si versiunile corecte
#       apasam y
#
#       acum trebuie sa activam venv ul: conda activate nameofvenv
#
#       cand vrem sa instalam pachete tot de aici o sa le instalam numai dupa activarea venv
#
#
#       pip install pygame   pentru pygame
#       conda install -c anaconda pandas
#       conda install -c anaconda numpy
#       pip install neat-python
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#