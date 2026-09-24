# Labo02 - Calcul du temps de trajet


Le programme demandé doit dans un 1er temps calculer la distance entre le robot et l’élément dans les directions x et y. Ensuite, la vitesse du robot sur la route et le terrain rocheux. Et calculer la longueur de L2.

# Pseudo Code – Calcul du temps de trajet

    1. Afficher un message de Bienvenue
    2. Saisir les valeurs connus 
        1. Afficher une invitation de saisie
        2. Saisir la distance dx
        3. Saisir la distance dy
        4. Saisir Longueur de L1
        5. Saisir vitesse sur la route s1
        6. Saisir vitesse sur terrain rocheux s2
    3. Vérifier si les données sont correctes

    4. Calculer la longueur du deuxième segment "L2"
        1. Calculer la distance verticale restante
            1. "dy - L1 = distance_verticale"
        2. Calculer "L2" avec le théorème de Pythagore
            1. Racine carrée de "dx au carré" plus "distance_verticale" au carré
    5. Calculer le temps pour parcourir chaque segment
        1. Calculer le temps du premier segment
            1. L1/s1 = temps1
        2. Calculer le temps du deuxième segment
            1. L2/s2 = temps2
    6. Calculer le temps total 
        1. temps1 + temps 2 = temps_total
    7. Afficher le résultat