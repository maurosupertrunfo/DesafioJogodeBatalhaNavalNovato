Desafio: nível novato
Posicionando Navios no Tabuleiro


Neste primeiro desafio, você dará o primeiro passo na construção do seu jogo de Batalha Naval. Você utilizará seus conhecimentos de vetores (arrays unidimensionais) em C para representar um tabuleiro simplificado e posicionar dois navios nele: um na vertical e outro na horizontal. Continue o desenvolvimento no mesmo programa iniciado anteriormente.


O que você vai fazer


Represente o Tabuleiro: Utilize uma matriz (array bidimensional) para representar o tabuleiro do Batalha Naval. Neste nível novato, o tabuleiro terá um tamanho fixo 10x10. Inicialize todas as posições do tabuleiro com o valor 0, representando água.
 
Posicione os Navios: Declare e inicialize dois vetores (arrays unidimensionais) para representar os navios. Cada navio ocupará um número fixo de posições no tabuleiro (defina esse tamanho, por exemplo, 3 posições). Um navio será posicionado horizontalmente e o outro verticalmente. Represente as posições ocupadas pelos navios na matriz do tabuleiro com o valor 3. Você deverá escolher as coordenadas iniciais de cada navio e garantir que eles estejam completamente dentro dos limites do tabuleiro e não se sobreponham. 
Dica: O posicionamento do navio pode ser feito copiando o valor 3 de cada posição do vetor do navio para as posições correspondentes na matriz do tabuleiro, de acordo com a orientação (horizontal ou vertical) do navio.
 
Exiba o Tabuleiro: Utilize loops aninhados e o comando printf para exibir o tabuleiro no console. Mostre a matriz completa, com 0s representando água e 3s representando as partes dos navios. A saída deve ser clara e organizada, permitindo visualizar facilmente a posição dos navios. 
Dica: Imprima um espaço ou outro caractere separador entre os elementos da matriz para facilitar a visualização.

Requisitos funcionais


O programa deve receber as coordenadas iniciais (linha e coluna) de cada navio como entrada (pode ser definido diretamente no código).
 
O programa deve validar se as coordenadas e o tamanho dos navios são válidos dentro dos limites do tabuleiro.
 
O programa deve garantir que os navios não se sobreponham.
 
O programa deve exibir o tabuleiro no console com os navios posicionados corretamente.

Requisitos não funcionais


Performance: O programa deve executar de forma eficiente, sem causar atrasos perceptíveis.
 
Documentação: O código deve ser bem documentado, com comentários claros explicando a lógica e o propósito de cada parte do programa. Utilize comentários para explicar a função de cada variável, loop e bloco de código.
 
Legibilidade: O código deve ser escrito de forma clara, organizada e fácil de entender, com nomes de variáveis descritivos e indentação consistente.

Simplificações para o nível básico


O tamanho do tabuleiro e dos navios é fixo (10x10).
 
Os navios têm tamanho fixo igual a 3.
 
As coordenadas dos navios são definidas diretamente no código, sem input do usuário.
 
Não é necessário implementar a lógica do jogo (ataques, acertos, etc.) neste nível.
 
A validação de sobreposição de navios pode ser simplificada.

Entregando seu Projeto


GitHub: Hospede seu projeto em um repositório no GitHub. Isso facilitará o versionamento do seu código e o compartilhamento com o professor.
 
SAVA: Envie o link do seu repositório GitHub na plataforma SAVA, na atividade correspondente ao Desafio Nível Básico. Certifique-se de que o repositório seja público ou que o professor tenha acesso a ele. O link do repositório deve ser a única forma de entrega do projeto, garantindo que o professor possa acessar seu código para avaliação.
 

Lembre-se: este desafio foca nos fundamentos de vetores e matrizes. Concentre-se em escrever um código claro, funcional e bem documentado, demonstrando sua compreensão dos conceitos aprendidos.



Tutorial git


Você está prestes a aplicar os conceitos aprendidos para resolver um desafio prático no ambiente do GitHub. Veja as instruções gerais a seguir para acessar, aceitar e executar o desafio, garantindo que sua solução esteja bem estruturada e documentada.


1
Dê o primeiro passo


Para começar, acesse o GitHub Classroom. Nesse ambiente, você terá acesso ao repositório padrão do desafio. Caso ainda não tenha uma conta no GitHub, não se preocupe: você pode criar uma gratuitamente, clicando no link.


2
Aceite o desafio


Após aceitar a tarefa, você receberá acesso ao repositório no GitHub, nele encontrará o repositório criado para o desenvolvimento do seu desafio.


3
Acesse o repositório


Clique no link do repositório para abrir o ambiente GitHub com a descrição do desafio e a estrutura modelo de arquivos e pastas que deve ser utilizada. É esse link que você deve enviar no SAVA.


4
Explore a estrutura do ambiente


No ambiente do GitHub, você verá a estrutura organizada de pastas e arquivos necessários para o desenvolvimento do desafio.


5
Desenvolva o desafio


Utilize o GitHub CodeSpace para editar o arquivo do código-fonte e desenvolver o desafio. Certifique-se de que o código esteja organizado e funcional para resolver o problema proposto.


6
Entregue o desafio


Para a entrega, você precisará fornecer o repositório do GitHub que contém todos os arquivos de código-fonte e conteúdos relacionados ao projeto. Certifique-se de que o repositório esteja bem estruturado, com pastas e arquivos nomeados de maneira clara e coerente. Envie o link para o repositório do seu desafio no GitHub.


Comente todos os arquivos de código-fonte. Os comentários são indispensáveis para demonstrar seu entendimento sobre o funcionamento do código e facilitar a correção por terceiros. Eles devem explicar a finalidade das principais seções do código, o funcionamento de algoritmos complexos e o propósito de variáveis e funções utilizadas.
