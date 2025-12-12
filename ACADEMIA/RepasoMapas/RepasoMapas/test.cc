#include "gtest/gtest.h"
#include "juego.h"

// Test básico para agregar jugador
TEST(JuegoTest, AgregarJugador)
{
    Juego juego("MiJuego", 2);
    EXPECT_TRUE(juego.addJugador("123ABC"));
    EXPECT_TRUE(juego.addJugador("456DEF"));
    EXPECT_FALSE(juego.addJugador("123ABC")); // Duplicado, debería retornar false
    EXPECT_FALSE(juego.addJugador("789GHI")); // Límite alcanzado, debería retornar false
}

// Test para incrementar la puntuación de un jugador
TEST(JuegoTest, IncrementarPuntuacion)
{
    Juego juego("OtroJuego", 2);
    juego.addJugador("111AAA");
    juego.addJugador("222BBB");
    EXPECT_TRUE(juego.incrementarPuntuacion("111AAA", 10));
    EXPECT_FALSE(juego.incrementarPuntuacion("333CCC", 5)); // Jugador no existente
}

// Test para obtener la puntuación de un jugador
TEST(JuegoTest, ObtenerPuntuacion)
{
    Juego juego("JuegoPrueba", 3);
    juego.addJugador("ABC123");
    juego.incrementarPuntuacion("ABC123", 15);
    EXPECT_EQ(juego.getPuntuacion("ABC123"), 15);
    EXPECT_EQ(juego.getPuntuacion("XYZ987"), -1); // Jugador no existente
}

// Test para obtener el número de jugadores
TEST(JuegoTest, ObtenerNumeroJugadores)
{
    Juego juego("GameTest", 4);
    juego.addJugador("111");
    juego.addJugador("222");
    EXPECT_EQ(juego.size(), 2);
    juego.addJugador("333");
    juego.addJugador("444");
    juego.addJugador("555"); // Límite alcanzado
    EXPECT_EQ(juego.size(), 4);
}

// Test para obtener al ganador
TEST(JuegoTest, ObtenerGanador)
{
    Juego juego("GanadorGame", 3);
    juego.addJugador("Player1");
    juego.addJugador("Player2");
    juego.addJugador("Player3");

    juego.incrementarPuntuacion("Player1", 20);
    juego.incrementarPuntuacion("Player2", 30);
    juego.incrementarPuntuacion("Player3", 25);

    EXPECT_EQ(juego.getGanador(), "Player2");
}

// Test para convertir a cadena
TEST(JuegoTest, ConvertirACadena)
{
    Juego juego("GameString", 2);
    juego.addJugador("ABC");
    juego.incrementarPuntuacion("ABC", 50);
    juego.addJugador("XYZ");
    juego.incrementarPuntuacion("XYZ", 30);

    EXPECT_EQ(juego.toString(), "Juego: GameString, Jugadores: [ABC, 50] [XYZ, 30]");
}

// Test para obtener el nombre del juego
TEST(JuegoTest, ObtenerNombre)
{
    Juego juego("JuegoDePrueba", 5);
    EXPECT_EQ(juego.getNombre(), "JuegoDePrueba");
}

// Test para obtener el máximo número de jugadores
TEST(JuegoTest, ObtenerMaxJugadores)
{
    Juego juego("JuegoMaxJugadores", 10);
    EXPECT_EQ(juego.getMaxJugadores_(), 10);
}

// Test para obtener el ganador cuando no hay jugadores
TEST(JuegoTest, ObtenerGanadorSinJugadores)
{
    Juego juego("NoPlayersGame", 3);
    EXPECT_EQ(juego.getGanador(), "No hay jugadores registrados");
}

// Test para obtener el ganador cuando hay un empate
TEST(JuegoTest, ObtenerGanadorEmpate)
{
    Juego juego("EmpateGame", 3);
    juego.addJugador("Player1");
    juego.addJugador("Player2");
    juego.addJugador("Player3");

    juego.incrementarPuntuacion("Player1", 20);
    juego.incrementarPuntuacion("Player2", 20);
    juego.incrementarPuntuacion("Player3", 20);

    EXPECT_EQ(juego.getGanador(), "Player1");
}

// Test para obtener el ganador cuando hay un único jugador
TEST(JuegoTest, ObtenerGanadorUnicoJugador)
{
    Juego juego("SoloUnJugadorGame", 1);
    juego.addJugador("LonelyPlayer");
    juego.incrementarPuntuacion("LonelyPlayer", 50);

    EXPECT_EQ(juego.getGanador(), "LonelyPlayer");
}

// Test para obtener el ganador después de incrementar puntuaciones
TEST(JuegoTest, ObtenerGanadorDespuesDeIncrementar)
{
    Juego juego("IncrementarGanadorGame", 3);
    juego.addJugador("Player1");
    juego.addJugador("Player2");
    juego.addJugador("Player3");

    juego.incrementarPuntuacion("Player1", 10);
    juego.incrementarPuntuacion("Player2", 30);
    juego.incrementarPuntuacion("Player3", 20);

    juego.incrementarPuntuacion("Player1", 20);
    juego.incrementarPuntuacion("Player2", 10);
    juego.incrementarPuntuacion("Player3", 15);

    EXPECT_EQ(juego.getGanador(), "Player2");
}

// Test para obtener el ganador después de incrementar puntuaciones y agregar jugadores
TEST(JuegoTest, ObtenerGanadorDespuesDeIncrementarYAgregar)
{
    Juego juego("IncrementarYAgregarGanadorGame", 3);
    juego.addJugador("Player1");
    juego.addJugador("Player2");
    juego.addJugador("Player3");

    juego.incrementarPuntuacion("Player1", 10);
    juego.incrementarPuntuacion("Player2", 30);
    juego.incrementarPuntuacion("Player3", 20);

    juego.addJugador("Player4");
    juego.incrementarPuntuacion("Player4", 25);

    EXPECT_EQ(juego.getGanador(), "Player2");
}

// Ejecutar los tests
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
