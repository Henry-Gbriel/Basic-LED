# Projeto Básico de Eletrônica com LED 🔌💡

Este projeto tem como objetivo apresentar os primeiros passos no mundo da eletrônica utilizando LEDs. Ele é dividido em três etapas de aprendizado e montagem, indo desde um circuito simples com bateria até a utilização do Arduino. Acompanhe cada fase para entender os conceitos fundamentais.

link do autodesk tinkercad: https://www.tinkercad.com/things/6skFEhsksaB-funcled

---

## Etapa 1 – Testando um LED diretamente com a bateria ⚠️

![Etapa 1 - LED sem resistor](https://github.com/user-attachments/assets/434fac46-d14f-4e58-990f-fc7038e816e8)

**Objetivo:**  
Observar o comportamento do LED sem proteção.

**Resultado:**  
O LED acende com intensidade muito alta e queima rapidamente. O multímetro mostra uma tensão de aproximadamente 7.63V, indicando excesso de tensão.

**Importância:**  
Essa etapa serve para demonstrar que o LED não deve ser ligado diretamente a uma fonte de tensão elevada. É essencial limitar a corrente para não danificar o componente.

---

## Etapa 2 – LED com resistor limitador 🔧

![Etapa 2 - LED com resistor](https://github.com/user-attachments/assets/dd60bcaa-8260-4c8b-b34c-2fcbf57e1f61)

**Objetivo:**  
Controlar a corrente que passa pelo LED, garantindo sua segurança e funcionamento adequado.

**Resultado:**  
O LED acende com brilho adequado e o circuito fica estável.

**Importância:**  
Essa montagem mostra um conceito-chave da eletrônica: **o uso de resistores para limitar corrente** e proteger componentes sensíveis.

---

## Etapa 3 – Controle do LED com Arduino 💻

![Etapa 3 - LED com Arduino](https://github.com/user-attachments/assets/8c0675f2-9d9e-4643-a7bc-ffa4b5db8ecb)

**Objetivo:**  
Integrar programação com eletrônica, utilizando um microcontrolador para acionar o LED.

**Funcionamento:**  
O Arduino envia um sinal digital (HIGH ou LOW) para acender ou apagar o LED. O resistor continua presente no circuito para limitar a corrente.

**Importância:**  
Essa etapa introduz o mundo da automação e programação embarcada.

---

## Por que aprender sobre LEDs? 🌟

- São componentes simples e baratos, ideais para iniciar estudos.
- Permitem visualização clara de circuitos funcionando.
- Ensinam sobre polaridade, tensão e corrente.
- Fundamentais em diversos projetos de eletrônica.

---

## Código Arduino – Piscar LED com Delay
<p><strong>Declaração da variável:</strong> A variável <code>led_one</code> representa o pino digital 2 onde o LED está conectado.</p>
<p><strong>setup():</strong> Configura o pino como saída.</p>
<p><strong>loop():</strong> Liga o LED por 1 segundo, depois desliga por 1 segundo. Esse ciclo se repete infinitamente.</p>

<h2>📄 Licença</h2>
<p>Este projeto está licenciado sob a <a href="LICENSE">MIT License</a>.</p>
    
<h2>🤝 Contribuição</h2>
<p>Fique à vontade para abrir issues e enviar pull requests para melhorias no projeto!</p>
    
<h2>📞 Contato</h2>
<p>Caso tenha dúvidas ou sugestões, entre em contato:</p>
<ul>
    <li>📧 Email: <a href="mailto:santossilvahenrygabriel58@gmail.com">Meu email de contato</a></li>
    <li>🔗 LinkedIn: <a href="www.linkedin.com/in/henry-gabriel-santos-silva-6ba776209">Meu Perfil linkedin</a></li>
</ul>
    
<hr>
    
<p>⭐ Se gostou do projeto, deixe um star no repositório!</p>

