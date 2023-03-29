//
// Created by Liquid on 3/29/2023.
//

#include "World.h"

World::World(int size, int seed) {
    m_size = size;
    m_seed = seed;
    m_numPoints = 0;
    m_numCells = 0;
    m_numLines = 0;
}

int World::GetSize() const {
    return m_size;
}
int World::GetSeed() const {
    return m_seed;
}
int World::GetNumPoints() const {
    return m_numPoints;
}
int World::GetNumCells() const {
    return m_numCells;
}
int World::GetNumLines() const {
    return m_numLines;
}

std::vector<Point> World::GetPoints() const {
    return m_points;
}
std::vector<Cell> World::GetCells() const {
    return m_cells;
}
std::vector<Line> World::GetLines() const {
    return m_lines;
}

void World::Generate() {
    random random;
    // Generate points
    std::vector<Point> points;
    for (int x = 0; x < m_size; x++) {
        for (int y = 0; y < m_size; y++) {
            points.push_back(Point(random.randomVector2f(-500,500) + sf::Vector2f(x*10, y*10),
                                   true, 1, 1, sf::Color::Red, sf::Color::White));
        }
    }
    m_points = points;
    m_numPoints = points.size();
}

void World::Render(sf::RenderWindow& window) {
    // Render points
    for (int i = 0; i < m_numPoints; i++) {
        m_points[i].Render(window);
    }
    std::cout << "Rendered " << m_numPoints << " points" << std::endl;
}