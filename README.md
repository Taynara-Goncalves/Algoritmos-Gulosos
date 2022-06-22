# Algoritmos-Gulosos

Método Guloso

Um algoritmo guloso escolhe, em cada iteração, o objeto mais apetitoso que vê pela frente. (A definição de apetitoso é estabelecida a priori, antes da execução do algoritmo.) O objeto escolhido passa a fazer parte da solução que o algoritmo constrói.

Um algoritmo guloso é míope: ele toma decisões com base nas informações disponíveis na iteração corrente, sem olhar as consequências que essas decisões terão no futuro. Um algoritmo guloso jamais se arrepende ou volta atrás: as escolhas que faz em cada iteração são definitivas.

Embora algoritmos gulosos pareçam naturalmente corretos, a prova de sua correção é, em geral, difícil e sutil. Para compensar, algoritmos gulosos são muito eficientes. Mas os problemas que admitem solução gulosa são um tanto raros.

Às vezes é difícil distinguir um algoritmo guloso de um algoritmo de programação dinâmica. 

Um algoritmo guloso
abocanha a alternativa mais promissora (sem explorar as outras),
é muito rápido,
nunca se arrepende de uma decisão já tomada,
não tem prova de correção simples.

Um algoritmo de programação dinâmica
explora todas as alternativa (mas faz isso de maneira eficiente),
é um tanto lento,
a cada iteração pode se arrepender de decisões tomadas anteriormente (ou seja, pode rever o ótimo corrente),
tem prova de correção simples.



(a) Implemente o algoritmo de Prim.

(b) Implemente o algoritmo de Kruskal.

(c) Implemente o algortimo de Dijkstra.
